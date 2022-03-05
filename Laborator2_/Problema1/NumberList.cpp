#include<iostream>
#include "NumberList.h"

using namespace std;

void NumberList:: Init()
{
    c=0;
    for(int i=0;i<10;i++)
    {
        numbers[i]=0;
    }
}

bool NumberList:: Add(int x)
{

    numbers[c]=x;
    if(c>=10)

        { cout<<"S-a depasit nr de elemente.";
         return 0;
        }


    c++;

}



void NumberList:: Sort()
{

    {for(int i=0;i<c-1;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            if(numbers[i]>numbers[j])
                swap(numbers[i],numbers[j]);
        }
    }
    }
}

void NumberList::Print()
{

    for(int i=0;i<c;i++)
        cout<<numbers[i]<<" ";

}
