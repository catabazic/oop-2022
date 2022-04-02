#pragma once
#include "Car.h"
#include "Weather.h"

class Ford: public Car {
    float capacety;
    float cons;
    float speed[3];


  public:
    Ford();
    void fuelCapacety(float x);
    void fuelCons(float x);
    void avSpeed(Weather w, float);

    float getFuelCapacety();
    float getFuelCons();
    float getAvSpeed();
    int getWeather();
};