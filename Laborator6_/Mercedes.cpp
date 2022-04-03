#include <iostream>
#include "Car.h"
#include "Mercedes.h"

using namespace std;


int Mercedes :: set_fuel_capacity(int x)
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
        this->fuel_capacity=90;

    }
    return this->fuel_capacity;
}
int Mercedes :: set_fuel_consumption(int x)
{
    if(x==0)
    {
        this->fuel_consumption=70;

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
int Mercedes :: set_average_speed(int x)
{
    if(x==0)
        this->average_speed=180;
    else if(x==1)
        this->average_speed=200;
    else if(x==2)
        this->average_speed=170;

    return this->average_speed;
}
void Mercedes::printData()
{
    cout<<"Mercedes: "<<endl;
}
