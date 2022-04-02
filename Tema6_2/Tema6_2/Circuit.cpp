#include "Circuit.h"

void Circuit::SetLength(int x) {
    this->lenght = x;
}

void Circuit::SetWeather(Weather w) {
    this->weather = w;
}

void Circuit::Race() {

}

int Circuit::getLength() {
    return this->lenght;
}

int Circuit::getWeather() {
    return this->weather;
}

void Circuit::AddCarr(Car* car) {
    cars[this->nrCars] = car;
    this->nrCars++;
}

void Circuit::ShowFinalRanks() {
}

void Circuit::ShowWhoDidNotFinis() {
}
