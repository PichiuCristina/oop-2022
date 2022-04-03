#ifndef MAZDA_H_INCLUDED
#define MAZDA_H_INCLUDED

class Mazda : public Car
{
public:
    int set_fuel_capacity(int x);
    int set_fuel_consumption(int x);
    int set_average_speed(int x);
    void printData();
};

#endif // MAZDA_H_INCLUDED
