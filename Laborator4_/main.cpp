#include <iostream>
#include <stdlib.h>
#include "Sort.h"
using namespace std;

int main()
{
    int n,a[101];
    cout<<"Cititi numarul de elemente pentru vector: "<<" ";
    cin>>n;
    cout<<"Cititi elementele din vector:"<<" ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    char sir[]="12,13,14,15";
    Sort vector1(10,10,100);
    Sort vector2(a,n);
    Sort vector3(6,1,2,3,4,5,6);
    Sort vector4(sir);
    Sort vector5;
    cout<<"Elementele initiale din vectorul 1:"<<" ";
    vector1.Print();
    cout<<endl;
    cout<<"Bubble Sort- vectorul 1:"<<" ";
    vector1.BubbleSort(0);
    vector1.Print();

    cout<<endl;
    cout<<"Insert Sort-vectorul 1:"<<" ";
    vector1.InsertSort(0);
    vector1.Print();
    cout<<endl;
    cout<<"Quick Sort- vectorul 1:"<<" ";
    vector1.BubbleSort(0);
    vector1.Print();
    cout<<endl;
    cout<<"Cate elemente sunt in vectorul 1:"<<" ";
    cout<<vector1.GetElementsCount();
    cout<<endl;
    cout<<"Elementul de pe pozitia data in vectorul 1 sortat:"<<" ";
    cout<<vector1.GetElementFromIndex(4);
    cout<<endl;
    cout<<endl;

    cout<<"Elementele initiale din vectorul 2:"<<" ";
    vector2.Print();
    cout<<endl;
    cout<<"Bubble Sort- vectorul 2:"<<" ";
    vector2.BubbleSort(0);
    vector2.Print();
    cout<<endl;
    cout<<"Quick Sort- vectorul 2:"<<" ";
    vector2.BubbleSort(0);
    vector2.Print();
    cout<<endl;
    cout<<"Insert Sort- vectorul 2:"<<" ";
    vector2.InsertSort(0);
    vector2.Print();
    cout<<endl;
    cout<<"Cate elemente sunt in vectorul 2:"<<" ";
    cout<<vector2.GetElementsCount();
    cout<<endl;
    cout<<"Elementul de pe pozitia data in vectorul  2 sortat: "<<" ";
    //in cazul aceasta , elementul de pe pozitia data va fi cel de dupa sortare;
    cout<<vector2.GetElementFromIndex(4);
    cout<<endl;
     cout<<endl;

    cout<<"Elementele initiale din vectorul 3:"<<" ";
    vector3.Print();
    cout<<endl;
    cout<<"Bubble Sort- vectorul 3:"<<" ";
    vector3.BubbleSort(0);
    vector3.Print();
    cout<<endl;
    cout<<"Quick Sort- vectorul 3:"<<" ";
    vector3.BubbleSort(0);
    vector3.Print();
    cout<<endl;
    cout<<"Insert Sort- vectorul 3:"<<" ";
    vector3.InsertSort(0);
    vector3.Print();
    cout<<endl;
    cout<<"Cate elemente sunt in vectorul 3:"<<" ";
    cout<<vector3.GetElementsCount();
    cout<<endl;
    cout<<"Elementul de pe pozitia data in vectorul 3 sortat:"<<" ";
    //in cazul aceasta , elementul de pe pozitia data va fi cel de dupa sortare;
    cout<<vector3.GetElementFromIndex(4);
    cout<<endl;
     cout<<endl;
    cout<<"Elementele initiale din vectorul 4:"<<" ";
    vector4.Print();
    cout<<endl;
    cout<<"Bubble Sort- vectorul 4:"<<" ";
    vector4.BubbleSort(0);
    vector4.Print();
    cout<<endl;
    cout<<"Quick Sort vectorul-4:"<<" ";
    vector4.QuickSort(0);
    vector4.Print();
    cout<<endl;
    cout<<" Insert Sort - vectorul 4:"<<" ";
    vector4.InsertSort(0);
    vector4.Print();
    cout<<endl;
    cout<<"Cate elemente sunt in vectorul 4:"<<" ";
    cout<<vector4.GetElementsCount();
    cout<<endl;
    cout<<"Elementul de pe pozitia data in vectorul 4 sortat:"<<" ";
    //in cazul aceasta , elementul de pe pozitia data va fi cel de dupa sortare;
    cout<<vector4.GetElementFromIndex(4);
    cout<<endl;


    cout<<endl;
    cout<<"Elementele initiale din vectorul 5:"<<" ";
    vector5.Print();
    cout<<endl;
    cout<<"Bubble Sort- vectorul 5:"<<" ";
    vector5.BubbleSort(0);
    vector5.Print();
    cout<<endl;
    cout<<"Quick Sort- vectorul 5:"<<" ";
    vector5.QuickSort(0);
    vector5.Print();
    cout<<endl;
    cout<<"Insert Sort- vectorul 5:"<<" ";
    vector5.InsertSort(0);
    vector5.Print();
    cout<<endl;
    cout<<"Cate elemente sunt in vectorul 5:"<<" ";
    cout<<vector5.GetElementsCount();
    cout<<endl;
    cout<<"Elementul de pe pozitia data in vectorul 5 sortat:"<<" ";
    //in cazul aceasta , elementul de pe pozitia data va fi cel de dupa sortare;
    cout<<vector5.GetElementFromIndex(4);
    cout<<endl;





    return 0;
}

