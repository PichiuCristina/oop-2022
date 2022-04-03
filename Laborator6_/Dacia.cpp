#include <iostream>
#include "Dacia.h"
#include "Car.h"
#include "Circuit.h"

int Dacia::set_average_speed(int x)
{

     if(x==0)
        this->average_speed=120;
    else if(x==1)
        this->average_speed=160;
    else if(x==2)
        this->average_speed=100;

    return this->average_speed;
}
int Dacia::set_fuel_capacity(int x)
{
     if(x==0)
    {
        this->fuel_capacity=60;

    }
    else if(x==1)

        {
            this->fuel_capacity=60;
        }

    if(x==2)
    {
        this->fuel_capacity=60;

    }
    return this->fuel_capacity;

}
int Dacia::set_fuel_consumption(int x)
{
    if(x==0)
    {
        this->fuel_consumption=100;

    }
    else if(x==1)
    {
        this->fuel_consumption=80;

    }
    else if(x==2)
    {
        this->fuel_consumption=75;

    }
    return this->fuel_consumption;

}
void Dacia::printData()
{
    std::cout<<"Dacia: "<<std::endl;
}
