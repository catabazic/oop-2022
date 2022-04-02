#include "Ford.h"

Ford::Ford() {
    fuelCapacety(52);
    fuelCons(9.0);
    avSpeed(weather::Rain, 40);
    avSpeed(weather::Snow, 50);
    avSpeed(weather::Sunny, 70);
}

void Ford::fuelCapacety(float x) {
    this->capacety = x;
}


void Ford::fuelCons(float x) {
    this->cons = x;
}

void Ford::avSpeed(Weather w,  float x) {
    speed[w] = x;

}

float Ford::getFuelCapacety() {
    return this->capacety;
}

float Ford::getFuelCons() {
    return this->cons;
}

float Ford::getAvSpeed() {
    return speed[getWeather()];
}

int Ford::getWeather() {
}
