#ifndef TOYOTA_H_INCLUDED
#define TOYOTA_H_INCLUDED

class Toyota : public Car
{
    public:
    int set_fuel_capacity(int x);
    int set_fuel_consumption(int x);
    int set_average_speed(int x);
    void printData();
};


#endif // TOYOTA_H_INCLUDED
