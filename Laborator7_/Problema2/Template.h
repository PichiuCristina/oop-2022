#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

template<typename T>
int functieDeCautare(T x,T y)
{
    return (x==y);

}
template<typename T>
int compare(T x,T y)
{
    return (x>y);
}
template <class T>
class Vector
{
    T* vect;
    T  nr;
    T dimension;
public:
    Vector(int addvar): nr(0),dimension(addvar)
    {
        this->vect=new T[this->dimension];
    }

    void push(T addvar)
    {
        if(this->nr==0)
        {
            this->vect[this->nr]=addvar;
            this->nr++;
        }
        else
        {
            T *nou=new T[this->nr];
            memcpy(nou,this->vect,sizeof(T)*this->nr);
            delete[]this->vect;
            this->dimension*=2;
            this->vect=new T[this->dimension];
            memcpy(this->vect,nou,sizeof(T)*this->nr);
            this->vect[this->nr++]=addvar;
        }
    }
    void removeT(T index)
    {
        for(int i = index ; i < this->nr- 1; i ++)
            this->vect[i] = this->vect[i+1];
        this->nr--;
    }
    void insertT(T index,T addvar)
    {
        for(int i = this->nr- 1 ; i >= index ; i --)
            this->vect[i+1] = this->vect[i];
        this->vect[index] = addvar;
        this->nr ++;
    }
    void seT(T index,T addvar)
    {
        this->vect[index]=addvar;
    }
    int pop()
    {
        return this->vect[this->nr-1];
    }
    int count()
    {
        return this->nr;
    }
    const int reff(T index)
    {
        const int &referenc=this->vect[index];
        return referenc;
    }

    int firstIndexOf(T value,int (*callback)(T, T))
    {
        for(int i=0; i<this->nr; i++)
        {
            if (callback != nullptr)
            {
                if(callback(value,this->vect[i])==1)
                    return i;
            }
            else if(this->vect[i]==value)
                return i;
        }
        return -1;
    }
    void sortt(int (*callback)(T, T))
    {
        for(int i=0; i<this->nr-1; i++)
        {
            if(callback(this->vect[i],this->vect[i+1])==1)
                swap(this->vect[i],this->vect[i+1]);
        }

    }
    void print()
    {
        for(int i=0; i<this->nr; i++)
        {
            cout<<this->vect[i]<<" ";
        }


    }



};


#endif // TEMPLATE_H_INCLUDED
