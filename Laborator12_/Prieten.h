#ifndef PRIETEN_H_INCLUDED
#define PRIETEN_H_INCLUDED
#include "Contact.h"
class Prieten:public Contact
{
    char*data_nastere;
    char*nr_telefon;
    char*adresa;
public:
    Prieten(char*name,char*data_nastere,char*nr_telefon,char*adresa):Contact(name)
    {
        this->data_nastere=new char[20];
        this->nr_telefon=new char[20];
        this->adresa=new char[20];
        this->name=new char[20];
        this->data_nastere=data_nastere;
        this->nr_telefon=nr_telefon;
        this->adresa=adresa;
        this->name=name;
    }
    char*getName()
    {
       return this->name;
    }
    char*getNumber()
    {
        return this->nr_telefon;
    }
};

#endif // PRIETEN_H_INCLUDED
