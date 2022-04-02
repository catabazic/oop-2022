#pragma once
#include <iostream>
#include "Weather.h"
#include "Car.h"

class Dacia : public Car {
    float capacety;
    float cons;
    int speed[3];


  public:
    Dacia();
    void fuelCapacety(float x);
    void fuelCons(float x);
    void avSpeed(Weather w, float);
    void print(std::ostream& out);

    float getFuelCapacety() override;
    float getFuelCons() override;
    float getAvSpeed() override;
    int getWeather() override;
};