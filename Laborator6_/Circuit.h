#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED

#include "Dacia.h"
#include "Ford.h"
#include "Mazda.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Car.h"
#include "Weather.h"

class Circuit
{

    Car** vectorDate;
    int currentIndex;
    int maxIndex;
    int length;
    int vreme;
    float *viteza;
    int cnt=0;

public:
    Circuit();
    int SetLength(int x);
    int SetWeather(int x);
    int AddCar(Car* pointercar);
    void Race();
    void ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

    void ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

    void printClassesData();
};

#endif // CIRCUIT_H_INCLUDED
