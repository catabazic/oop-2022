#include "Toyota.h"

Toyota::Toyota() {
    fuelCapacety(13.2);
    fuelCons(7.3);
    avSpeed(weather::Rain, 50);
    avSpeed(weather::Snow, 30);
    avSpeed(weather::Sunny, 70);
}

void Toyota::fuelCapacety(float x) {
    this->capacety = x;
}

void Toyota::fuelCons(float x) {
    this->cons = x;
}

void Toyota::avSpeed(Weather w, float x) {
    speed[w] = x;
}

float Toyota::getFuelCapacety() {
    return this->capacety;
}

float Toyota::getFuelCons() {
    return this->cons;
}

float Toyota::getAvSpeed() {
    return speed[getWeather()];
}

int Toyota::getWeather() {
}
