#pragma once
#include "Weather.h"
#include "Car.h"

class Circuit {
    int lenght;
    int nrCars;
    Weather weather;

    Car* cars[100];

public:

	void SetLength(int x);
    void SetWeather(Weather w);
    void Race();

    int getLength();
    int getWeather();

    void AddCarr(Car* car);
    void ShowFinalRanks();
    void ShowWhoDidNotFinis();

};