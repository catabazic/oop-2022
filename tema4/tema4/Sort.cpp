#include "Sort.h"
#include <stdlib.h>
#include <iostream>
#include <cstdarg>
#include <stdarg.h>

Sort::Sort(int numb, int min, int max) : nr(numb) {
    this->vector = new int[numb];
    for (int i = 0; i< numb; i++) {
        vector[i] = rand() % max + min;
    }
}

Sort::Sort() : nr(), vector() {
}

Sort::Sort(int* v, int n) {
    this->nr = n;
    this->vector = v;
}



Sort::Sort(int nr, ...) : nr(nr) {
    va_list args;
    va_start(args, nr);
    vector = new int[nr];
    for (int i = 0; i < nr; i++) {
        int a     = va_arg(args, int);
        vector[i]  = a;
    }
    va_end(args);
}

Sort::Sort(const char* s) {
    this->nr = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            nr++;
        }
    }
    vector = new int[nr];

    int n = 0;
    int i  = 0;
    for (int j = 0; s[j] != '\0'; j++) {
        if (s[i] == ',') {
            vector[i] = n;
            n    = 0;
            i++;
        }
        n = n * 10 + (s[j] - '0');
    }
    vector[i] = n;
}

void Sort::InsertSort(bool ascendent) {
    int i, key, j;
    for (i = 1; i < this->nr; i++) {
        key = vector[i];
        j   = i - 1;
        while (j >= 0 && vector[j] > key) {
            vector[j + 1] = vector[j];
            j             = j - 1;
        }
        vector[j + 1] = key;
    }
}



void Sort::QuickSort(bool ascendent) {
    

}

void Sort::BubbleSort(bool ascendent) {
    int temp;
    for (int j = 0; j < this->nr - 1; j++) {
        for (int i = 0; i < this->nr - 1; i++) {
            if (vector[i] > vector[i + 1]) {
                temp          = vector[i];
                vector[i]     = vector[i + 1];
                vector[i + 1] = temp;
            }
        }
    }
}

void Sort::Print() {
    for (int i = 0; i < nr; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << '\n';
}

int Sort::GetElementsCount() {
    return this->nr;
}

int Sort::GetElementFromIndex(int index) {
    return vector[index];
}
