#include "NumberList.h"
#include <iostream>


void NumberList::Init() {
    this->count = 0;
}

bool NumberList::Add(int x) {
    int m = this->count;
    if (m < 10) {
        this->numbers[m] = x;
        count++;
    } else {
        return false;
    }
}

void NumberList::Sort() {
    int m = this->count;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m-i-1; j++) {
            if (this->numbers[i] > this->numbers[i + 1]) {
                int temp = this->numbers[i];
                this->numbers[i] = this->numbers[i + 1];
                this->numbers[i + 1] = temp;
            }
        }
    }
}


void NumberList::Print() {
    for (int i = 0; i < count; i++) {
        std::cout << this->numbers[i] << " ";
    }
    std::cout << '\n';
}
