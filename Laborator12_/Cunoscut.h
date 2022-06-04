#ifndef CUNOSCUT_H_INCLUDED
#define CUNOSCUT_H_INCLUDED

class Cunoscut:public Contact
{ char*nr_telefon;

public:
    Cunoscut(char*name,char*nr_telefon):Contact(name)
    {

        this->nr_telefon=new char[20];
        this->name=new char[20];
        this->nr_telefon=nr_telefon;
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

#endif // CUNOSCUT_H_INCLUDED
