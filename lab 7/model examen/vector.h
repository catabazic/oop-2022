#pragma once


template<typename T>
class Vector {
    int size;
    int last;
    T* vector;

public:
    Vector();
    ~Vector();
    void push(T);
    T pop();
    void remove (int);
    void insert(int,T);
    void sort();
    const T& get(int);
    void set(int,T);
    T count();
    int firstIndexOf(T);

    bool operator<(const T);
    bool operator==(const T);

    void print();
};


