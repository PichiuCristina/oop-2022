#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

class Contact
{
protected:
    char*name;
public:
    Contact(char*name)
    {
        this->name=new char[20];
        this->name=name;
    }
    virtual char*getName()=0;
    virtual char*getNumber()=0;
};

#endif // CONTACT_H_INCLUDED
