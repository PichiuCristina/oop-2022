#ifndef MERCEDES_H_INCLUDED
#define MERCEDES_H_INCLUDED

class Mercedes: public Car
{
    public:
    int set_fuel_capacity(int x);
    int set_fuel_consumption(int x);
    int set_average_speed(int x);
    void printData();
};

#endif // MERCEDES_H_INCLUDED
