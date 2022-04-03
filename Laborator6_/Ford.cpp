#include <iostream>
#include "Car.h"
#include "Ford.h"


using namespace std;


int Ford :: set_fuel_capacity(int x)
{
    if(x==0)
    {
        this->fuel_capacity=90;

    }
    else if(x==1)

        {
            this->fuel_capacity=80;
        }

    if(x==2)
    {
        this->fuel_capacity=90;

    }
    return this->fuel_capacity;
}
int Ford :: set_fuel_consumption(int x)
{
    if(x==0)
    {
        this->fuel_consumption=96;

    }
    else if(x==1)
    {
        this->fuel_consumption=880;

    }
    else if(x==2)
    {
        this->fuel_consumption=90;

    }
    return this->fuel_consumption;
}
int Ford :: set_average_speed(int x)
{
    if(x==0)
        this->average_speed=150;
    else if(x==1)
        this->average_speed=170;
    else if(x==2)
        this->average_speed=140;

    return this->average_speed;
}
void Ford::printData()
{
    cout<<"Ford: "<<endl;
}
