#include <iostream>
#include <stdlib.h>
#include "Circuit.h"
#include "Car.h"
#include <cstring>
#include <algorithm>

Circuit:: Circuit()
{
    this->maxIndex=100;
    this->currentIndex=0;
    this->vectorDate=(Car**)(malloc(this->maxIndex*sizeof(Car)));

}
int Circuit::SetLength(int x)
{
    this->length=x;
    return this->length;

}
int Circuit :: AddCar( Car * myClass)
{
     if (this->currentIndex < this->maxIndex)
    {
        this->vectorDate[this->currentIndex++] = myClass;
        return true;
    }
    return false;

}
int Circuit::SetWeather(int x)
{

    this->vreme=x;
    return this->vreme;
}
void Circuit::Race()
{
    this->viteza=(float*)(malloc(100*sizeof(float)));
  for(int i=0;i<100;i++)
  {
      this->viteza[i]=0;
  }
    for(int i=0;i<this->currentIndex;i++)
    {


         {float nr=(float)(this->length)/this->vectorDate[i]->set_average_speed(this->vreme);
          this->viteza[this->cnt]=nr;
          cnt++;
         }

    }


}
void Circuit:: ShowFinalRanks()
{

    for(int i=0;i<this->cnt-1;i++)
    {
        for(int j=i+1;j<this->cnt;j++)
        if(this->viteza[i]>this->viteza[j])
            {std::swap(this->viteza[i],this->viteza[j]);
             std:: swap(this->vectorDate[i],this->vectorDate[j]);
            }
    }
    for(int i=0;i<this->cnt;i++)
    {   this->vectorDate[i]->printData();
        std::cout<<this->viteza[i]<<std::endl;
    }



}
    void Circuit:: ShowWhoDidNotFinish()
    {
      int check;
      for(int i=0;i<this->currentIndex;i++)
      {
          check=(this->vectorDate[i]->set_fuel_capacity(this->vreme)*(this->length))/(this->vectorDate[i]->set_fuel_consumption(this->vreme));
          if(check<this->length)
          {
              vectorDate[i]->printData();
              std::cout<<"Nu ajunge la destinatie."<<std::endl;
          }

      }
    }




