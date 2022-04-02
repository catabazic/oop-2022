#pragma once
#include "Car.h"
#include "Weather.h"

class Mazda : public Car {
    float capacety;
    float cons;
    int speed[3];

  public:
    Mazda();
    void fuelCapacety(float x);
    void fuelCons(float x);
    void avSpeed(Weather w, float);

    float getFuelCapacety();
    float getFuelCons();
    float getAvSpeed();
    int getWeather();
};