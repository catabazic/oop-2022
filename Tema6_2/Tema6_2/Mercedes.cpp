#include "Mercedes.h"

Mercedes::Mercedes() {
    fuelCapacety(80);
    fuelCons(7);
    avSpeed(weather::Rain, 40);
    avSpeed(weather::Snow, 50);
    avSpeed(weather::Sunny, 40);
}

void Mercedes::fuelCapacety(float x) {
    this->capacety = x;
}

void Mercedes::fuelCons(float x) {
    this->cons = x;
}

void Mercedes::avSpeed(Weather w, float x) {
    speed[w] = x;
}

float Mercedes::getFuelCapacety() {
    return this->capacety;
}

float Mercedes::getFuelCons() {
    return this->cons;
}

float Mercedes::getAvSpeed() {
    return this->speed[getWeather()];
}

int Mercedes::getWeather() {
}
