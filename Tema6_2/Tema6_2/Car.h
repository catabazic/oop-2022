#pragma once


class Car {
    float capacety;
    float cons;
    float speed[3];

  public:
    Car() {
    }
    virtual ~Car()=0;

    virtual float getFuelCapacety() = 0;
    virtual float getFuelCons()     = 0;
    virtual float getAvSpeed()      = 0;
    virtual int getWeather()=0;
};