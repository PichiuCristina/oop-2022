//Problem 1: Build an array template (similar to the one below) and add exceptions to it.
//Liste
#include <iostream>
#include <stdlib.h>
using namespace std;
class Compare

{

public:

	virtual int CompareElements(void* e1, void* e2) = 0;

};

template<class T>

class ArrayIterator

{

private:

	int Current; // mai adaugati si alte date si functii necesare pentru iterator

public:

	ArrayIterator();

	ArrayIterator& operator ++ ();

	ArrayIterator& operator -- ();

	bool operator= (ArrayIterator<T> &);

	bool operator!=(ArrayIterator<T> &);

	T* GetElement()
	{
	    return this->Current;
	}

};

template<class T>

class Array

{

private:

	T* List; // lista cu pointeri la obiecte de tipul T*

	int Capacity; // dimensiunea listei de pointeri

	int Size; // cate elemente sunt in lista

public:

	Array()// Lista nu e alocata, Capacity si Size = 0
	{
	   this->Size=0;
	   this->Capacity=0;
	   try
	   {
	       throw "Nu ati alocat capacitate cu constructor by default!";
	   }catch(const char*msg){cout<<msg<<endl;}
}


	~Array()// destructor

	 {


	    this->Size=0;
	    this->Capacity=0;
	    delete[]List;
	 }

	Array(int capacity) // Lista e alocata cu 'capacity' elemente
	{
	    try{
	    if(capacity<=0)
            throw "Imposibil de alocat dimeniune negativa/zero unei liste!";
	    this->Capacity=capacity;
	    this->Size=0;
	    this->List =(T*) malloc(this->Capacity*sizeof(T));
        }catch(const char* msg) {cout<<msg<<endl;}


	}


	Array(const Array<T> &otherArray) // constructor de copiere

	{
	    this->Capacity=otherArray.Capacity;
	    this->Size=otherArray.Size;
	}

	T& operator[] (int index)// arunca exceptie daca index este out of range

    {   try{
        if(index>this->Size)
        {
            throw "Nu putem avea index-ul mai mare decat size-ul!";
        }

        }catch(const char*msg){cout<<msg<<endl;}
    }

	const Array<T>& operator+=(const T &newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
     {

      this->Size+=1;
      if(this->Size<=this->Capacity)
         {this->List[this->Size]=newElem;
         }
        else
        {
            cout<<"Stop,depasesti capacitatea listei!"<<endl;
        }

         return (*this);
     }
	const Array<T>& Insert(int index, const T &newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
   {
       try{
          if(index>this->Size||index<0)
            throw "Index-ul nu a fost acceptat!";
            for(int i = this->Size ; i >= index ; i --)
            this->List[i+1] = this->List[i];
            this->List[index] = newElem;
            this->Size ++;
       }catch(const char*msg){cout<<msg<<endl;}
       return (*this);
   }
	const Array<T>& Insert(int index, const  Array<T> otherArray) // adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
    {
        try{
         int i=1;
          if(index>this->Size||index<0)
            throw "Index-ul nu a fost acceptat!";
    /*     while(index<=otherArray.Size)
         {
            for(int j = this->Size ; j >= index ; j --)
            this->List[i+1] = this->List[i];
            this->List[index] = 2;
            this->Size ++;


         }
         index++;
         i++;
*/
       }catch(const char*msg){cout<<msg<<endl;}

       return (*this);
    }
	const Array<T>& Delete(int index) // sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
      {
          try{

          if(index>this->Size||index<0)
            throw "Index-ul nu a fost acceptat!";

        for(int i = index ; i <= this->Size ; i ++)
            this->List[i] = this->List[i+1];
        this->Size--;

      }catch(const char*msg){cout<<msg<<endl;}
      }


	bool operator=(const Array<T> &otherArray)
      {

      }


	void Sort() // sorteaza folosind comparatia intre elementele din T
   {
       for(int i=1;i<this->Size;i++)
       {
           for(int j=i+1;j<=this->Size;j++)
           {
               if(this->List[i]>this->List[j])
                swap(this->List[i],this->List[j]);
           }
       }
   }
	void Sort(int(*compare)(const T&, const T&)); // sorteaza folosind o functie de comparatie

	void Sort(Compare *comparator); // sorteaza folosind un obiect de comparatie



	// functii de cautare - returneaza pozitia elementului sau -1 daca nu exista

	int BinarySearch(const T& elem); // cauta un element folosind binary search in Array

	int BinarySearch(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind binary search si o functie de comparatie

	int BinarySearch(const T& elem, Compare *comparator);//  cauta un element folosind binary search si un comparator



	int Find(const T& elem) // cauta un element in Array
	{
	    for(int i=1;i<=this->Size;i++)
            if(this->List[i]==elem)
            return 1;
        return 0;
	}

	int Find(const T& elem, int(*compare)(const T&, const T&));//  cauta un element folosind o functie de comparatie

	int Find(const T& elem, Compare *comparator);//  cauta un element folosind un comparator



	int GetSize()
	{
	    return this->Size;
	}

	int GetCapacity()
    {

        return this->Capacity;
    }
    void Print()
    {
        for(int i=1;i<=this->Size;i++)
        {
            cout<<this->List[i]<<" ";
        }
        cout<<endl;
    }


	ArrayIterator<T> GetBeginIterator();

	ArrayIterator<T> GetEndIterator();

};
int main()
{
//try1
Array<int> List;
//try2
   Array<int> List1(-10); //va afisa exceptie
//try3-correct
   Array<int> List2(4); //declarare corecta
   cout<<endl;

   cout<<"Verificare-size-ul lui List2:"<<List2.GetSize()<<endl;
   cout<<endl;
   cout<<"Verificare-size-ul lui List2:"<<List2.GetCapacity()<<endl;
   cout<<endl;
   List2[1]; //va afisa exceptie deoarece momentan index-ul meu e 0;
   List2+=2;
   List2+=3;
   List2+=3;
   List2+=1;
   List+=3;
   cout<<"Verficare-size-ul lui List2:"<<List2.GetSize()<<endl;
   cout<<endl;
   cout<<"Verificare-size-ul lui List2:"<<List2.GetCapacity()<<endl;
   cout<<endl;
   List2.Insert(1,2);
   cout<<"Verificare-size-ul lui List2:"<<List2.GetSize()<<endl;
   cout<<endl;
   cout<<"Verificare-size-ul lui List2:"<<List2.GetCapacity()<<endl;
   List2.Print(); //functioneaza
   Array<int> List3(3);
   List3+=1;
   List3+=2;
   cout<<endl;
   List3.Print();
  // List2.Insert(20,List3);
   List2.Delete(1);
   cout<<endl;
   List2.Print();


       return 0;
}
