#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>
#include "Sort.h"
using namespace std;

Sort :: Sort(int n,int minim,int maxim)
{
    numar_elemente=n;
    time_t t;
    srand((unsigned)time(&t));
    vect = (int *)(malloc(numar_elemente * sizeof(int)));
    for ( int i=0; i<numar_elemente; i++)
    {

        vect[i]=(rand()%(maxim-minim))+minim;
    }

}

Sort :: Sort (int *a, int n)
{
    numar_elemente=n;
    vect = (int *)(malloc(numar_elemente * sizeof(int)));
    for(int i=0; i < numar_elemente; i++)
    {
        vect[i]=a[i];

    }

}

Sort :: Sort (int count,...)
{
    numar_elemente=count;
    vect = (int *)(malloc(numar_elemente* sizeof(int)));
    va_list vl;
    va_start(vl,numar_elemente);
    for (int i=0; i<numar_elemente; i++)
    {
        vect[i]=va_arg(vl,int);

    }
    va_end(vl);

}

Sort :: Sort (char *sir)
{
    char *p;
    int m[101],k=0;
    p=strtok(sir,",");
    while(p)
    {
        m[k++]=atoi(p);
        p=strtok(NULL,",");
    }
    vect=(int *)(malloc(k* sizeof(int)));
    numar_elemente=k;
    for(int i=0; i<numar_elemente; i++)
        vect[i]=m[i];

}

Sort :: Sort ():vect(new int[6]
{
    1,2,3,4,5,6
})
{
numar_elemente=6;
}
int Sort :: parti (int low, int high,bool ascendent)
{
    if(ascendent==false)
    {
        int pivot = vect[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {

            if (vect[j] > pivot)
            {
                i++;
                swap(vect[i],vect[j]);
            }
        }
        swap(vect[i + 1],vect[high]);
        return (i + 1);
    }
    else if(ascendent==true)
    {
        int pivot = vect[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {

            if (vect[j] < pivot)
            {
                i++;
                swap(vect[i],vect[j]);
            }
        }
        swap(vect[i + 1],vect[high]);
        return (i + 1);
    }
}

void Sort:: quickSort(int low, int high,bool ascendent)
{

    if (low < high)
    {

        int pi = parti(low, high,ascendent);


        quickSort(low, pi - 1,ascendent);
        quickSort(pi + 1, high,ascendent);
    }
}

void Sort :: QuickSort(bool ascendent)
{
    quickSort(0,numar_elemente-1,ascendent);
}

void Sort:: InsertSort(bool ascendent)
{
    int i, key, j,n;
    if(ascendent==false)
    {
        for (i = 1; i < numar_elemente; i++)
        {
            key = vect[i];
            j = i - 1;


            while (j >= 0 && vect[j] < key)
            {
                vect[j + 1] = vect[j];
                j = j - 1;
            }
            vect[j + 1] = key;
        }
    }
    else if(ascendent==true)
    {
        for (i = 1; i < numar_elemente; i++)
        {
            key = vect[i];
            j = i - 1;

            while (j >= 0 && vect[j] > key)
            {
                vect[j + 1] = vect[j];
                j = j - 1;
            }
            vect[j + 1] = key;
        }
    }
}


void Sort :: BubbleSort (bool ascendent)
{
    int i,j,n;
    if(ascendent==false)
    {
        for (i = 0; i < numar_elemente-1; i++)

            for (j = 0; j < numar_elemente-i-1; j++)
                if (vect[j] < vect[j+1])
                    swap(vect[j],vect[j+1]);
    }
    else if(ascendent==true)
    {
        for (i = 0; i < numar_elemente-1; i++)

            for (j = 0; j < numar_elemente-i-1; j++)
                if (vect[j] > vect[j+1])
                    swap(vect[j],vect[j+1]);
    }
}

void Sort :: Print()
{
    for(int i=0; i<numar_elemente; i++)
        cout<<vect[i]<<" ";
}

int Sort :: GetElementsCount()
{
    return numar_elemente;
}

int Sort ::  GetElementFromIndex(int index)
{
    if(index>=0&&index<numar_elemente)
        return vect[index];
    return -1;
}


