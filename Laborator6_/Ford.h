#ifndef FORD_H_INCLUDED
#define FORD_H_INCLUDED

class Ford : public Car
{

public:
    int set_fuel_capacity(int x);
    int set_fuel_consumption(int x);
    int set_average_speed(int x);
    void printData();
};


#endif // FORD_H_INCLUDED
