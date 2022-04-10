#include <iostream>
#include "Template.h"
using namespace std;

int main()
{
    Vector<int> object1(300);
    object1.push(5);
    object1.push(7);
    object1.push(7);
    object1.push(11);
    object1.push(20);
    object1.push(111);
    cout<<"Afisam elementele din vector:";
    object1.print();
    cout<<endl;
    cout<<"Afisam numarul de elemente din vector:";
    cout<<object1.count();
    cout<<endl;
    cout<<"Afisam ultimul element din vector:";
    cout<<object1.pop();
    cout<<endl;
    cout<<"Stergem elementul de pe pozitia 1 din vector:";
    object1.removeT(1);
    object1.print();
    cout<<endl;
    cout<<"Inseram elementul 10 pe pozitia 0 din vector:";
    object1.insertT(0,10);
    object1.print();
    cout<<endl;
    cout<<"Constant reference:";
    cout<<object1.reff(0)<<endl;
    cout<<"Apelam functia callback pentru firstIndexoff:";
    cout<<object1.firstIndexOf(7,functieDeCautare);
    cout<<endl;
    cout<<"Sortam vectorul crescator:";
    object1.sortt(compare);
    object1.print();
    cout<<endl;
    cout<<"Apelam functia set,inseram pe pozitia 2 elementul 99:";
    object1.seT(3,99);
    object1.print();
    cout<<endl;
    cout<<"Sortam din nou vectorul:";
    object1.sortt(compare);
    object1.print();

    return 0;
}
