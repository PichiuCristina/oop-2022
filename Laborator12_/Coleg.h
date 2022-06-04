#ifndef COLEG_H_INCLUDED
#define COLEG_H_INCLUDED

class Coleg:public Contact
{
    char*nr_telefon;
    char*firma;
    char*adresa;
public:
    Coleg(char*name,char*nr_telefon,char*firma,char*adresa):Contact(name)
    {
         this->firma=new char[20];
        this->nr_telefon=new char[20];
        this->adresa=new char[20];
        this->name=new char[20];
        this->nr_telefon=nr_telefon;
        this->adresa=adresa;
        this->firma=firma;
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

#endif // COLEG_H_INCLUDED
