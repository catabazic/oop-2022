#include "Dacia.h"

Dacia::Dacia() {
    fuelCapacety(50);
    fuelCons(6.2);
    avSpeed(weather::Rain, 30);
    avSpeed(weather::Snow, 40);
    avSpeed(weather::Sunny, 60);
}

void Dacia::fuelCapacety(float x) {
    this->capacety = x;
}

void Dacia::fuelCons(float x) {
    this->cons = x;
}

void Dacia::avSpeed(Weather w, float x) {
    speed[w] = x;
}

void Dacia::print(std::ostream& out) {
}

float Dacia::getFuelCapacety() {
    return this->capacety;
}

float Dacia::getFuelCons() {
    return this->cons;
}

float Dacia::getAvSpeed() {
    return speed[getWeather()];
}

int Dacia::getWeather() {
}
