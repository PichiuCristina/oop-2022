#include <iostream>
#include "Prieten.h"
#include "Cunoscut.h"
#include "Coleg.h"
#include "Agenda.h"
using namespace std;

int main()
{
    Prieten prieten1("Cristina","06iulie2002","0740620101","Iasi");
    Coleg coleg1("Ana","0740610101","FII","Iasi");
    Cunoscut cunoscut1("Pichiu","0740620101");
    Agenda agenda1;
    agenda1.addContact(&prieten1);
    agenda1.addContact(&coleg1);
    agenda1.addContact(&cunoscut1);
    agenda1.Print();
    if(agenda1.FindByName("Cristina")==1)
        cout<<"S-a gasit Contactul Cristina!"<<endl;
    else
         cout<<"Nu s-a gasit Contactul Cristina!"<<endl;
    agenda1.RemoveByName("Ana");
    agenda1.Print();

    return 0;
}
