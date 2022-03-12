#include <iostream>
#include <cstring>
#include "Math.h"
using namespace std;

int main()
{
    Math first;
    int v[10],i,n,x,y,z;
    double x1,y1,z1;
    char str1[101],str2[101];
    cout<<"Citeste valoarea size-ului pentru lista:";
    cin>>n;
    cout<<endl;
    cout<<"Citeste primul sir de caractere:";
    cin>>str1;
    cout<<"Citeste al doilea sir de caractere:";
    cin>>str2;
    cout<<"Adunam doua numere de tip int:"<<endl;
    cin>>x>>y;
    cout<<first.Add(x,y)<<endl;
    cout<<"Adunam trei numere de tip int:"<<endl;
    cin>>x>>y>>z;
    cout<<first.Add(x,y,z)<<endl;
    cout<<"Adunam doua numere de tip double:"<<endl;
    cin>>x1>>y1;
    cout<<first.Add(x1,y1)<<endl;
    cout<<"Adunam trei numere de tip double:"<<endl;
    cin>>x1>>y1>>z1;
    cout<<first.Add(x1,y1,z1)<<endl;
    cout<<"Inmultim doua numere de tip int:"<<endl;
    cin>>x>>y;
    cout<<first.Mul(x,y)<<endl;
    cout<<"Inmultim trei numere de tip int:"<<endl;
    cin>>x>>y>>z;
    cout<<first.Mul(x,y,z)<<endl;
    cout<<"Inmultim doua numere de tip double:"<<endl;
    cin>>x1>>y1;
    cout<<first.Mul(x1,y1)<<endl;
    cout<<"Inmultim trei numere de tip double:"<<endl;
    cin>>x1>>y1>>z1;
    cout<<first.Mul(x1,y1,z1)<<endl;
    cout<<"Pentru variadic method:"<<endl;
    cout<<first.Add(n,x,y,z,x1,y1,z1)<<endl;
    cout<<"Pentru sirurile de caractere:"<<endl;
    cout<<first.Add(str1,str2);

    return 0;
}
