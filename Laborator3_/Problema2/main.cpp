#include <iostream>
#include "Canvas.h"

using namespace std;


int main()
{
    Canvas c(50, 50);
    cout<<endl;
    c.DrawRect(1, 1, 10, 10, '+');
    cout<<endl;
    c.DrawCircle(10, 10, 5, '+');
    cout<<endl;
    c.DrawCircle(10, 10, 3, '*');
    cout<<endl;
    c.FillCircle(20, 20, 7, '#');
cout<<endl;
    c.FillRect(3, 3, 6, 6, '-');
    cout<<endl;
    c.SetPoint(0, 0, '#');
    cout<<endl;
    c.Print();
}

