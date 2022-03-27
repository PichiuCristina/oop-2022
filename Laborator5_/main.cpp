#include <iostream>
#include <stdlib.h>
#include "Number.h"
using namespace std;
Number Get(Number ex)
{
    return ex;
}
int main()
{
    int x,b,c;
    char *a;
    cout<<"Numarul1 pe baza caruia veti realiza conversii si operatii:";
    cin>>a;
    cout<<endl;
    cout<<"Baza in care se afla numarul:";
    cin>>b;
    cout<<endl;
    Number n1(a,b);
    cout<<"Verificare daca functia Print() functioneaza pentru numarul 1:"<<endl;
    n1.Print();
    cout<<endl;
    cout<<"Verificare daca functia GetDigitsCount() functioneaza pentru numarul 1:"<<endl;
    cout<<n1.GetDigitsCount();
    cout<<endl;
    cout<<"Verificare daca functia GetBase()functioneaza pentru numarul 1:"<<endl;
    cout<<n1.GetBase();
    cout<<endl;
    cout<<"Baza transformare numar:";
    cin>>x;
    n1.SwitchBase(x);
    cout<<endl;

    cout<<"Numarul2 pe baza caruia veti realiza conversii si operatii:";
    cin>>a;
    cout<<endl;
    cout<<"Baza in care se afla numarul2:";
    cin>>b;
    cout<<endl;
    Number n2(a,b);
    cout<<"Verificare daca functia Print() functioneaza pentru numarul 2:"<<endl;
    n2.Print();
    cout<<endl;
    cout<<"Verificare daca functia GetDigitsCount() functioneaza pentru numarul 2:"<<endl;
    cout<<n2.GetDigitsCount();
    cout<<endl;
    cout<<"Verificare daca functia GetBase()functioneaza pentru numarul 2:"<<endl;
    cout<<n2.GetBase();
    cout<<endl;
    cout<<"Baza transformare numar";
    cin>>x;
    n2.SwitchBase(x);
    cout<<endl;

    cout<<"Verificare constructor de copiere Number n3=n2:";
    Number n3=n2;
    cout<<endl;
    cout<<"Se va afisa obiectul3 = obiectul2:";
    n3.Print();
    cout<<endl;
    cout<<"Baza obiectul3 = obiectul2:";
    cout<<n3.GetBase();
    cout<<endl;
    cout<<"Lungimea obiectul3 = obiectul2:";
    cout<<n3.GetDigitsCount();
    cout<<endl;
    cout<<"Convertire obiectul3= obiectul2 in baza c:"<<endl;
    cout<<"Cititi baza c:";
    cin>>c;
    n3.SwitchBase(c);
    cout<<endl;
    cout<<endl;
    cout<<"Verificare daca functioneaza move constructor-ul:";
    cout<<endl;
    Number n4=Get(Number("12",10));
    n4.Print();
    cout<<endl;
    cout<<"Afisare baza obiectului 4:";
    cout<<n4.GetBase();
    cout<<endl;
    cout<<"Afisare lungimea obiectului 4:";
    cout<<n4.GetDigitsCount();
    cout<<endl;
    cout<<"Convertirea obiectului  4 in baza c:"<<endl;
    cout<<"Cititi baza c:";
    cin>>c;
    n4.SwitchBase(c);
    cout<<endl;
    cout<<"Test - operatori:"<<endl;
    n1.SwitchBase(10);
    cout<<endl;
    n2.SwitchBase(10);
    cout<<endl;
    if(n1<n2)
        cout<<"n1 este mai mic decat n2."<<endl;
    if(n1>n2)
        cout<<"n1 este mai mare decat n2."<<endl;
    if(n1>=n2)
        cout<<"n1 este mai mare sau egal decat n2."<<endl;
    if(n1<=n2)
        cout<<"n1 este mai mic sau egal decat n2."<<endl;
    if(n1==n2)
        cout<<"n1 este egal cu n2."<<endl;
    int y=!n1;
    cout<<"Verificare daca operatorul ! functioneaza."<<endl;
    cout<<y<<endl;
    cout<<"Verificare daca [] functioneaza."<<endl;
    int z=n1[4];
    cout<<z<<endl;
    cout<<"Verificare daca functioneaza operatorul -- prefixat:";
    --n1;
    n1.Print();
    cout<<endl;
    cout<<"Verificare daca functioneaza operatorul -- postfixat:";
    n1--;
    n1.Print();
    cout<<endl;
    cout<<"Verificare daca operatorul - ( friend function)"<<endl;
    Number n5=12; 
    Number n6=10;
    Number n7=n5-n6;
    Number n8=n5+n6;
    n7.Print();
    cout<<endl;
    n8.Print();
    cout<<endl;
    n8.SwitchBase(8);
    cout<<endl;

    return 0;

    }
