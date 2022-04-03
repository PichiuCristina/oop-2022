#include <iostream>
#include "Car.h"
#include "Toyota.h"

using namespace std;

int Toyota :: set_fuel_capacity(int x)
{
     if(x==0)
    {
        this->fuel_capacity=90;

    }
    else if(x==1)

        {
            this->fuel_capacity=90;
        }

    if(x==2)
    {
        this->fuel_capacity=85;

    }
    return this->fuel_capacity;
}
int Toyota :: set_fuel_consumption( int x)
{
    if(x==0)
    {
        this->fuel_consumption=100;

    }
    else if(x==1)
    {
        this->fuel_consumption=120;

    }
    else if(x==2)
    {
        this->fuel_consumption=90;

    }
    return this->fuel_consumption;
}
int Toyota:: set_average_speed(int x)
{
    if(x==0)
        this->average_speed=177;
    else if(x==1)
        this->average_speed=200;
    else if(x==2)
        this->average_speed=189;

    return this->average_speed;
}
void Toyota::printData()
{
    cout<<"Toyota: "<<endl;
}
