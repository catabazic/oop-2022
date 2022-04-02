#include "Mazda.h"

Mazda::Mazda() {
    fuelCapacety(55);
    fuelCons(8.2);
    avSpeed(weather::Rain, 60);
    avSpeed(weather::Snow,40);
    avSpeed(weather::Sunny, 50);
}

void Mazda::fuelCapacety(float x) {
    this->capacety = x;
}

void Mazda::fuelCons(float x) {
    this->cons = x;
}

void Mazda::avSpeed(Weather w, float x) {
    speed[w] = x;
}

float Mazda::getFuelCapacety() {
    return this->capacety;
}

float Mazda::getFuelCons() {
    return this->cons;
}

float Mazda::getAvSpeed() {
    return this->speed[getWeather()];
}

int Mazda::getWeather() {
}
