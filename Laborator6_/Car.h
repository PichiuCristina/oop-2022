#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

class Car
{

public:

    int fuel_capacity;
    int fuel_consumption;
    int average_speed;
    virtual int set_fuel_capacity(int x)=0;
    virtual set_fuel_consumption(int x)=0;
    virtual int set_average_speed(int x)=0;
    virtual void printData() = 0;

};


#endif // CAR_H_INCLUDED
