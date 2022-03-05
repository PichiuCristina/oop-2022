#include <iostream>
#include "Class.h"
#include "GlobalClass.h"
#include <cstring>
using namespace std;

int main()
{
    float x,y,z,x1,y1,z1;
    char name1[101],name2[101];
    Student l1;
    Student l2;
    cout<<"Introduceti numele primului student:";
    strcpy(name1,l1.setNameStudent());
    cout<<"Introduceti media primului stundent la matematica:";
    x=l1.setGradeMath();
    cout<<"Introduceti media primului stundent la istorie:";
    y=l1.setGradeHistory();
    cout<<"Introduceti media primului stundent la engleza:";
    z=l1.setGradeEnglish();
    cout<<"Media generala a primului student este:"<<l1.GetAverageGrade(x,y,z)<<endl;
    cout<<"Introduceti numele celui de al doilea student:";
    strcpy(name2,l2.setNameStudent());
    cout<<"Introduceti media celui de al doilea stundent la matematica:";
    x1=l2.setGradeMath();
    cout<<"Introduceti media celui de al doilea stundent la istorie:";
    y1=l2.setGradeHistory();
    cout<<"Introduceti media celui de al doilea stundent la engleza:";
    z1=l2.setGradeEnglish();
    cout<<"Media generala celui de al doilea student este:"<<l1.GetAverageGrade(x1,y1,z1)<<endl;
    cout<<"Compararea mediilor celor 2 studenti la matematica:"<<compareGradeMath(x,x1)<<endl;
    cout<<"Compararea mediilor celor 2 studenti la istorie:"<<compareGradeMath(y,y1)<<endl;
    cout<<"Compararea mediilor celor 2 studenti la engleza:"<<compareGradeEnglish(z,z1)<<endl;
    cout<<"Compararea mediilor generale ale celor 2 studenti:"<<compareAverageGrade(l1.GetAverageGrade(x,y,z),l2.GetAverageGrade(x1,y1,z1))<<endl;
    cout<<"Compararea numelor celor 2 studenti:"<<compareName(name1,name2)<<endl;
}
