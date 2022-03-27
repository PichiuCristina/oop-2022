#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "Number.h"
using namespace std;
Number:: Number(const char* value,int base)
{
    cout<<"Apelam constructorul: "<<endl;
    nr=new char[strlen(value)+1];
    memcpy(nr,value,strlen(value)+1);
    if(base>=2&&base<=16)
        this->baza=base;
    else
        this->baza=-1;
    lungime=strlen(value);
}

Number::~Number()
{
    cout<<"S-a apelat destructorul: "<<endl;
    delete nr;
    nr=nullptr;
}
Number :: Number (const Number& object)
{
    this->lungime=object.lungime;
    this->baza=object.baza;
    this->nr=new char(lungime);
    this->nr=strcpy(nr,object.nr);
}
Number :: Number  (const Number&& object)
{
    this->lungime=object.lungime;
    this->baza=object.baza;
    this->nr=new char(lungime);
    this->nr=strcpy(nr,object.nr);
}
void Number:: Print()
{
    for(int i=0; i<strlen(nr); i++)
        cout<<nr[i];

}

int Number::  GetDigitsCount()
{
    return this->lungime;
}
int Number :: GetBase()
{
    return this->baza;
}
int Number ::val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

char Number ::reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

void Number ::strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

void Number:: SwitchBase(int newBase)
{
    int power = 1;
    int num = 0;
    int i;
    char res[101];
    int index=0;
    int inputNr=0;

    if(newBase==10&&(this->baza)!=10)
    {
        for (i = lungime - 1; i >= 0; i--)
        {

            if (val(nr[i]) >= this->baza)
            {
                cout<<"Invalid Number";

            }

            num += val(nr[i]) * power;
            power = power *(this-> baza);
        }

        while(num)
        {
            res[index++]=(num%10)+'0';
            num/=10;
        }
        res[index]='\0';
        strev(res);
        strcpy(nr,res);

    }
    else if(newBase!=10&&(this->baza)==10)
    {

        inputNr=atoi(nr);
        while(inputNr>0)

        {

            res[index++]=reVal(inputNr%newBase);
            inputNr/=newBase;
        }
        res[index]='\0';
        strev(res);
        strcpy(nr,res);
    }
    else if(newBase!=10&&(this->baza)!=10)
    {
        for (i = lungime - 1; i >= 0; i--)
        {

            if (val(nr[i]) >= baza)
            {
                cout<<"Invalid Number";

            }

            num += val(nr[i]) * power;
            power = power *baza;
        }

        inputNr=num;
        while(inputNr>0)

        {

            res[index++]=reVal(inputNr%newBase);
            inputNr/=newBase;
        }
        res[index]='\0';
        strev(res);
        strcpy(nr,res);

    }
    this->baza=newBase;
    this->lungime=strlen(res);
    cout<<nr;
}

bool Number::operator > (const Number & object) {


	if(strlen(this->nr)>strlen(object.nr))
        return true;
    else
    if(strlen(this->nr)==strlen(object.nr))
    {
        for(int i=0;i<strlen(this->nr);i++)
        {
            if(this->nr[i]>object.nr[i])
                return true;
        }
    }
	return false;

}
bool Number ::operator < (const Number & object)
{
   if(strlen(this->nr)<strlen(object.nr))
        return true;
    else
    if(strlen(this->nr)==strlen(object.nr))
    {
        for(int i=0;i<strlen(this->nr);i++)
        {
            if(this->nr[i]<object.nr[i])
                return true;
        }
    }
	return false;
}
bool Number :: operator >= (const Number & object)
{ int ok=0;
    if(strlen(this->nr)>strlen(object.nr))
        return true;
    else
    if(strlen(this->nr)==strlen(object.nr))
    {
        for(int i=0;i<strlen(this->nr);i++)
        {
            if(this->nr[i]>object.nr[i])
                return true;
                else
                if(this->nr[i]==object.nr[i])
                ok++;

        }
    }
    if(ok==strlen(this->nr))
        return true;
	return false;
}

bool Number :: operator <= (const Number & object)
{
    int ok=0;
    if(strlen(this->nr)<strlen(object.nr))
        return true;
    else
    if(strlen(this->nr)==strlen(object.nr))
    {
        for(int i=0;i<strlen(this->nr);i++)
        {
            if(this->nr[i]<object.nr[i])
                return true;
                else
                if(this->nr[i]==object.nr[i])
                ok++;

        }
    }
    if(ok==strlen(this->nr))
        return true;
	return false;
}
bool Number :: operator == (const Number & object)
{
    if(strlen(this->nr)!=strlen(object.nr))
        return false;
        else
    if(strlen(this->nr)==strlen(object.nr))
    {
        for(int i=0;i<strlen(this->nr);i++)
        {
            if(this->nr[i]!=object.nr[i])
                return false;

        }
    }

        return true;
}

int Number :: operator ! ()
{
    return 100-atoi(this->nr);
}
int Number :: operator[](int index)
{
    int y=atoi(nr);
    y+=index;
    return y;
}
void Number :: operator --()

{
    strcpy(this->nr,this->nr+1);
}
void Number :: operator --(int numar)
{
   int i=strlen(nr);
   this->nr[i-1]=NULL;

}

Number::Number(int number) {
    this->baza = 10;
    int number_of_digits = 0;
    int copy_number = number;
    while (number != 0) {
        number_of_digits += 1;
        number = number / 10;
    }
    this->nr = new char[number_of_digits+1];
    memset(this->nr, 0, number_of_digits+1);
    int counter = number_of_digits-1;
    while (copy_number != 0) {
        this->nr[counter--] = copy_number % 10 + '0';
        copy_number /= 10;
    }
}

int operator+(Number& object, Number& object2) {

   return atoi(object.nr)+atoi(object2.nr);
}


int operator-(Number& object, Number& object2) {
  return atoi(object.nr)-atoi(object2.nr);
}

Number& Number::operator=(Number&& object) {
    this->lungime=object.lungime;
	this->baza = object.baza;
    this->nr=new char(lungime);
	strcpy(this->nr,object.nr);
	return *this;

}


