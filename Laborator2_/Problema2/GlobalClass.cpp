#include "Class.h"
#include "GlobalClass.h"
#include <iostream>
#include <cstring>

using namespace std;

int  compareGradeMath(float x, float y)
{

     if(x==y)
        return 0;
    if(x>y)
        return 1;
    return -1;
}
int  compareGradeEnglish(float x, float y)
{

     if(x==y)
        return 0;
    if(x>y)
        return 1;
    return -1;
}
int  compareGradeHistory(float x, float y)
{

     if(x==y)
        return 0;
    if(x>y)
        return 1;
    return -1;
}
int  compareAverageGrade(float x, float y)
{

     if(x==y)
        return 0;
    if(x>y)
        return 1;
    return -1;
}

int compareName( char name1[101], char name2[101])
{

    int minim = strlen(name1);
    if(strlen(name2)<minim)
    minim=strlen(name2);
    for(int i=0; i<minim;i++)
    {

        if(name1[i]>name2[i])
            return 1;
        else if (name1[i]<name2[i])
            return -1;
    }
    return 0;

}
