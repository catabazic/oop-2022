#include "Students.h"
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS


void Students::init() {
    this->name[0]  = '/0';
    this->math = 0;
    this->history = 0;
    this->english = 0;
    this->average = 0;
}

void Students::setName(const char* nume) {
    strcpy_s(this->name, nume);
}

void Students::setMath(int math) {
    this->math = math;
}


void Students::setEnglish(int english) {
    this->english = english;
}

void Students::setHistory(int history) {
    this->history = history;
}

void Students::setAverage() {
    this->average = (this->math + this->english + this->history) / 3;
}

//==============================================================================

const char* Students::getName() const {
    return this->name;
}

int Students::getMath() const {
    return this->math;
}

int Students::getEnglish() const {
    return this->english;
}

int Students::getHistory() const {
    return this->history;
}

int Students::getAverage() const {
    return this->average;
}
