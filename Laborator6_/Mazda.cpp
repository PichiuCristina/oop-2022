#include <iostream>
#include "Car.h"
#include "Mazda.h"

using namespace std;


int Mazda :: set_fuel_capacity(int x )
{
   if(x==0)
    {
        this->fuel_capacity=70;

    }
    else if(x==1)

        {
            this->fuel_capacity=80;
        }

    if(x==2)
    {
        this->fuel_capacity=70;

    }
    return this->fuel_capacity;
}
int Mazda :: set_fuel_consumption(int x)
{
    if(x==0)
    {
        this->fuel_consumption=99;

    }
    else if(x==1)
    {
        this->fuel_consumption=120;

    }
    else if(x==2)
    {
        this->fuel_consumption=85;

    }
    return this->fuel_consumption;
}
int Mazda :: set_average_speed(int x )
{
    if(x==0)
        this->average_speed=183;
    else if(x==1)
        this->average_speed=166;
    else if(x==2)
        this->average_speed=170;

    return this->average_speed;
}
void Mazda::printData()
{
    cout<<"Mazda: "<<endl;
}
