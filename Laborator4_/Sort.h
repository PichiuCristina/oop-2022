#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

class Sort

{
    int *vect;
    int numar_elemente;
    void quickSort(int, int, bool );
    int parti (int, int, bool );


public:

    Sort(int numar_elemente,int minim,int maxim);
    Sort (int *vect, int numar_elemente);
    Sort (int count,...);
    Sort (char *sir);
    Sort();

    void InsertSort(bool ascendent=false);

    void QuickSort(bool ascendent=false);

    void BubbleSort(bool ascendent=false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};


#endif // SORT_H_INCLUDED
