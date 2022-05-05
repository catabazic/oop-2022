#include "vector.h"
#include <iostream>

template <typename T>
inline Vector<T>::Vector() {
    size = 1;
    last  = -1;
    vector = new T[size];
}

template <typename T>
Vector<T>::~Vector() {
    delete[] vector;
}

template <typename T>
inline void Vector<T>::push(T a) {
    if (vector[size] != '\0') {
        T buf[200];
        for (int i = 0; i < size; i++) {
            buf[i] = vector[i];
        }
        this->size = size * 2;
        delete[] vector;
        vector     = new T[size];
        for (int i = 0; i < size / 2; i++) {
            vector[i] = buf[i];
        }
    } 
    vector[last+1] = a;
    this->last++;
}

template <typename T>
T Vector<T>::pop() {
    return vector[last];
}

template <typename T>
void Vector<T>::remove(int nr) {
    for (int i = nr; i < last; i++) {
        vector[i] = vector[i - 1];
    }
    vector[last] = '\0';
    last--;
}

template <typename T>
void Vector<T>::insert(int nr, T a) {
    if (vector[size] != '\0') {
        T buf[200];
        for (int i = 0; i < size; i++) {
            buf[i] = vector[i];
        }
        this->size = size * 2;
        delete[] vector;
        vector = new T[size];
        for (int i = 0; i < size / 2; i++) {
            vector[i] = buf[i];
        }
    } 
    for (int i = last; i < nr; i--) {
        vector[i] = vector[i + 1];
    }
    vector[nr]=a;
    last++;
}

template <typename T>
void Vector<T>::sort() {
    T temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vector[j] > vector[i]) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}

template <typename T>
const T& Vector<T>::get(int nr) {
    return vector[nr];
}

template <typename T>
void Vector<T>::set(int i, T ob) {
    vector[i] = ob;
}

template <typename T>
T Vector<T>::count() {
    T sum;
    for (int i = 0; i < last; i++) {
        sum += vector[i];
    }
    return sum;
}

template <typename T>
int Vector<T>::firstIndexOf(T a) {
    for (int i = 0; i < size; i++) {
        if (vector[i] == a) {
            return i;
        }
    }
}

/*
template <typename T>
bool Vector<T>::operator<(const T rt) {
    return vector[int i]<rt;
}

template <typename T>
bool Vector<T>::operator==(const T rt) {
    return vector[int i]==rt;
}*/

template <typename T>
void Vector<T>::print() {
    for (int i = 0; i < size; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << '\n';
}


