#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

class Number

{

  char *nr;
  int baza;
  int lungime;

public:

   Number(const char * value, int base); // where base is between 2 and 16
   ~Number();
   Number(int number);
    Number (const Number& object);
    Number (const Number&& object);
    friend int operator-(Number& object, Number& object2);
    friend int operator+(Number& object, Number& object2);
    Number& operator=(Number&& ex);
    bool operator>(const Number & object);
    bool operator<(const Number & object);
    bool operator >= (const Number & object);
    bool operator <= (const Number & object);
    bool operator == (const Number & object);
    int operator ! ();
    int operator[](int index);
    void operator -- ();
    void operator -- (int numar);
    void SwitchBase(int newBase);
    void Print();
   int val(char c);
   char reVal(int num);
   void strev(char *str);
   int  GetDigitsCount(); // returns the number of digits for the current number
   int  GetBase(); // returns the current base

};

#endif // NUMBER_H_INCLUDED
