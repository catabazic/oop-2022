#include "Math.h"
#include <stdarg.h>
#include <cstdarg>
#include <iostream>

int Math::Add(int a, int b) {
    int s = a + b;
    std::cout << s << '\n';
    return s;
}

int Math::Add(int a, int b, int c) {
    int s = a + b + c;
    std::cout << s << '\n';
    return s;
}

int Math::Add(double a, double b) {
    double s = a + b;
    std::cout << s << '\n';
    return s;
}

int Math::Add(double a, double b, double c) {
    double s = a + b + c;
    std::cout << s << '\n';
    return s;
}

int Math::Mul(int a, int b) {
    int p = a * b;
    std::cout << p << '\n';
    return p;
}

int Math::Mul(int a, int b, int c) {
    int p = a * b * c;
    std::cout << p << '\n';
    return p;
}

int Math::Mul(double a, double b) {
    double p = a * b;
    std::cout << p << '\n';
    return p;
}

int Math::Mul(double a, double b, double c) {
    double p = a * b * c;
    std::cout << p << '\n';
    return p;
}

int Math::Add(int count, ...) {
    int s = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int x = va_arg(args, int);
        s = s + x;
    }
    va_end(args);
    std::cout << s << '\n';
    return s;
}

/*
const char* Math::Add(const char* str1, const char* str2) {
    if (str1 == nullptr) {
        return nullptr;
    }
    if (str2 == nullptr) {
        return nullptr;
    }
    char* p;
    int a         = (int) str1;
    int b         = (int) str2;
    int c         = a + b;
    sprintf(p, "%d", c);

    return p;
}
*/