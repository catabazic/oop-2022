#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <iostream>
#include <string>


Number::Number(const char* value, int base) {
    this->base = base;
    memcpy(this->value, value, sizeof(value) - 1);
}

Number::Number(int number) {
    this->base = 10;
    sprintf(this->value, "%d", number);
}

Number::~Number() {
    delete[] value;
}

Number Number::operator--() {
    for (int i = 1; value[i] != '\0'; i++) {
        value[i - 1] = value[i];
    }
    return *this;
}

Number Number::operator--(int) {
    int a = sizeof(value)-1;
    value[a] ='\0';
    return *this;
}

char* Number::operator+=( Number& r) {
    if (this->base == r.GetBase()) {
        return this->value = add(this->value, r.GetValue());
    } else if (this->base > r.GetBase()) {
        r = to10(r.GetValue(), r.GetBase());
        r = from10(atoi(r.GetValue()), this->base);
        return this->value = add(this->value,r.GetValue());
    } else {
        *this = to10(this->value, this->base);
        *this = from10(atoi(this->value), r.GetBase());
        return this->value = add(this->value, r.GetValue());
    }
}

Number Number::operator=(const char* numb) {
    strcat(this->value, numb);
    return *this;
}


char* operator+(Number& l, Number& r) {
    if (l.GetBase() == r.GetBase()) {
        return add(l.GetValue(), r.GetValue());
    } else if (l.GetBase() > r.GetBase()) {
        r = to10(r.GetValue(), r.GetBase());
        r = from10(atoi(r.GetValue()), l.GetBase());
        return add(l.GetValue(), r.GetValue());
    } else {
        l = to10(l.GetValue(), l.GetBase());
        l = from10(atoi(l.GetValue()), r.GetBase());
        return add(l.GetValue(), r.GetValue());
    }
}

char* operator-(Number& l,Number& r) {
    if (l.GetBase() == r.GetBase()) {
        return dec(l.GetValue(), r.GetValue());
    } else if (l.GetBase() > r.GetBase()) {
        r = to10(r.GetValue(), r.GetBase());
        r = from10(atoi(r.GetValue()), l.GetBase());
        return dec(l.GetValue(), r.GetValue());
    } else {
        l = to10(l.GetValue(), l.GetBase());
        l = from10(atoi(l.GetValue()), r.GetBase());
        return dec(l.GetValue(), r.GetValue());
    }
}

char* operator-(char* l, Number& r) {
    r = to10(r.GetValue(), r.GetBase());
    r = from10(atoi(r.GetValue()), 16);
    return dec(l, r.GetValue());
}

char* operator+(char*l, Number&r) {
    r = to10(r.GetValue(), r.GetBase());
    r = from10(atoi(r.GetValue()), 16);
    return add(l, r.GetValue());
}



bool Number::operator>(Number& r) {
    if (this->base == r.GetBase()) {
        if (this->value > r.GetValue()) {
            return true;
        } else {
            return false;
        }
    } else if (this->base > r.GetBase()) {
        Number copy = r;
        copy           = to10(copy.GetValue(), copy.GetBase());
        copy           = from10(atoi(copy.GetValue()), this->base);
        if (this->value > copy.GetValue()) {
            return true;
        } else {
            return false;
        }
    } else {
        Number copy = *this;
        copy        = to10(copy.GetValue(), copy.GetBase());
        copy        = to10(copy.GetValue(), r.GetBase());
        if (copy.GetValue() > r.GetValue()) {
            return true;
        } else {
            return false;
        }
    }
}

int Number::operator[](int ind) {
    return this->value[ind];;
}

void Number::SwitchBase(int newBase) {
    this->base = newBase;
}

void Number::Print() {
    std::cout << "number is " << this->value << "in base " << this->base;
}

char* Number::GetValue() {
    return this->value;
}

int Number::GetDigitsCount() {
    int i = 0;
    while (value[i] != '\0') {
        i++;
    }
    return i;
}

int Number::GetBase() {
    return this->base;
}

char* from10(int value, int base) {
    char ram[50], val = value;
    int i = 0;
    while (value!=0) {
        ram[i] = value % base;
        val = val / base;
        i++;
    }
    return ram;
}

char* to10(char* value, int base) {
    int size = sizeof(value) - 1;
    int rez  = 0;
    char rezultat[50];
    for (int i = 0; i < sizeof(value) - 1; i++) {
        rez = value[i] ^ size;
        size--;
    }
    sprintf(rezultat, "%d", rez);
    return rezultat;
}

char* add(char* r, char* l) {
    int a=0,b=0,c;
    char rezultat[50];
    for (int i = 0; r[i] != '\0'; i++) {
        a = a * 10 + r[i] - '0';
    }
    for (int i = 0; l[i] != '\0'; i++) {
        b = b * 10 + l[i] - '0';
    }
    c = a + b;
    std::sprintf(rezultat, "%d", c);
    return rezultat;
}

char* dec(char* r, char* l) {
    int a = 0, b = 0, c;
    char rezultat[50];
    for (int i = 0; r[i] != '\0'; i++) {
        a = a * 10 + r[i] - '0';
    }
    for (int i = 0; l[i] != '\0'; i++) {
        b = b * 10 + l[i] - '0';
    }
    c = a - b;
    std::sprintf(rezultat, "%d", c);
    return rezultat;
}
