#include "Class.h"
#include <iostream>
using namespace std;

char * Student :: setNameStudent()
{
    char name[101];
    cin>>name; // numele de familie
    return name;
}
int Student :: setGradeMath()
{

    float x;
    cin>>x;
    return x;
}
int Student :: setGradeEnglish()
{

    float x;
    cin>>x;
    return x;
}
int Student :: setGradeHistory()
{

    float x;
    cin>>x;
    return x;
}
int Student :: GetAverageGrade(float x, float y, float z)
{

    float media;
    media=(x+y+z)/3;
    return media;
}
