#ifndef DACIA_H_INCLUDED
#define DACIA_H_INCLUDED
#include "Car.h"
class Dacia : public Car{

public:
    int set_fuel_capacity(int x);
    int set_fuel_consumption(int x);
    int set_average_speed(int x);
    void printData();
};

#endif // DACIA_H_INCLUDED
