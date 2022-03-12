#include <iostream>
#include "Math.h"
#include <cstring>
#include <cstdarg>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int Math::  Add(int x,int y)
{
     return x+y;
}

int Math::  Add(int x,int y,int z)
{
   return x+y+z;
}
int Math:: Add(double x,double y)
{
    return x+y;
}

int Math::  Add(double x,double y,double z)
{
   return x+y+z;
}

int Math:: Mul(int x,int y)
{
    return x*y;
}

int Math:: Mul(int x,int y,int z)
{
   return x*y*z;
}

int Math:: Mul(double x,double y)
{
    return x*y;
}

int Math:: Mul(double x,double y,double z)
{
  return x*y*z;
}

int Math::  Add(int nr,...)  //variadic method
{
     va_list vl;
     int suma=0;
     va_start(vl,nr);
     for (int i=0;i<nr;i++)


         suma+=va_arg(vl,int);
         va_end(vl);

     return suma;
}

 char* Math:: Add(const char *str1, const char *str2)
{

   if(str1==NULL||str2==NULL)
    return NULL;
   int rez=strlen(str1)+strlen(str2)+1;
   char* rezultat= (char *)malloc(rez);
   memset(rezultat,0,rez);
   memcpy(rezultat,str1,strlen(str1));
   memcpy(rezultat+strlen(str1),str2,strlen(str2));
   return rezultat;
}
