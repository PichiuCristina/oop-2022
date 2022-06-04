#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED
#include <cstring>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Agenda
{

    Contact**vect;
    int index;
public:
    Agenda()
    {
        this->vect=(Contact**)malloc(sizeof(Contact*)*100);
        this->index=0;
    }
    void addContact(Contact*x)
    {
        this->vect[this->index++]=x;
    }
    int FindByName(char*name)
    {
        for(int i=0; i<this->index; i++)
        {
            if(strcmp(this->vect[i]->getName(),name)==0)
                return 1;
        }
        return 0;
    }
    void RemoveByName(char*name)
    {
        for(int i=0; i<this->index; i++)
        {
            if(strcmp(this->vect[i]->getName(),name)==0)
            {
                int poz=i;
                for(int j=poz; j<this->index-1; j++)
                    this->vect[j]=this->vect[j+1];
                this->index--;
            }

        }
    }
    void Print()
    {
        cout<<"------------------------"<<endl;
        for(int i=0; i<this->index; i++)
            cout<<"Name:"<<this->vect[i]->getName()<<"; Number:"<<this->vect[i]->getNumber()<<endl;
    }
};

#endif // AGENDA_H_INCLUDED
