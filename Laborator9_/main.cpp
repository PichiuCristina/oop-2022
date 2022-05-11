#include <iostream>
#include <string.h>
using namespace std;

template<class T, class K> //Map<int,const char*> m =>avem nevoie de un template cu doua argumente, le declaram de tip clasa;
class Map { //by default, cand declaram un obiect de tipul Map,cheia va fi de tip T, iar valoarea de tip K;

    struct elemente
    {
        T key;  //practic, ii spun compilatorului ca obiectele delcarate de tip T vor fi int (conform main), iar cele de tip K vor
               //fi de tipul const char*;
        K value;
        int index;
    };
    elemente* a = new elemente[5];
    int nr = 0;
public:
    K& operator[](int kkey) //Avem nevoie de supraincarcarea operatorului [] deoarece m este un obiect de tip clasa, nu un vector;
    {
        int i;
        for (i = 0; i < nr; i++)
        {
            if (kkey == a[i].key)
                return a[i].value;

        }

        a[nr].key = kkey;
        a[nr].index = nr;

        nr++;

        return a[nr - 1].value;

    }

    void Set(T cheie, K valoare)
    {
        int ok = 0;
        for (int i = 0; i < nr; i++)
        {
            if (a[i].key == cheie)
            {
                ok = 1;
                a[i].value = valoare;
                break;

            }
        }
        if (ok == 0) {

            a[nr].key = cheie;
            a[nr].value = valoare;
            a[nr].index = nr;
            nr++;
        }
    }
    bool Get(const T& key, K& value)
    {
        for (int i = 0; i < nr; i++)
        {

            if (a[i].key == key)
                value = a[i].value;
            return true;
        }
        return false;

    }

    int Count()
    {
        return nr;
    }

    void Clear()
    {
        nr = 0;
        delete[]a;
    }



    bool Delete(const T& key)
    {

        for (int i = 0; i < nr; i++)
        {
            if (a[i].key == key)
            {
                for (int j = i + 1; j < nr; j++)
                {
                    a[j].index--;
                    a[j - 1] = a[j];
                }
                nr--;
                return true;
            }
        }
        return false;
    }
    bool Includes(const Map<T, K>& mapnou)
    {
        ///verific daca mapul meu actual inclus in mapul asta mapnou
        int ok = 0, i, j;
        for (j = 0; j < mapnou.nr; j++)
        {
            T cheiecautata = mapnou.a[j].key;
            ok = 0;
            for (i = 0; i < nr; i++)
            {
                if (a[i].key == cheiecautata) ok = 1;
            }
            if (ok == 0) return false;
        }
        return true;
    }
    //Avand in vedere ca structured bin., este aplicata pe o clasa, avem nevoie de begin() si end();
    elemente* begin()
    {
        return &a[0];
    }
    elemente* end()
    {
        return &a[nr];
    }

};


int main()

{

    Map<int, const char*> m;

    m[10] = "C++"; //C++ e de tip const char, deci va fi de tipul K din clasa=>value=C++;

    m[20] = "test";

    m[30] = "Poo";

    for (auto [key, value, index] : m)

    {

        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

    }

    m[20] = "result";

    for (auto [key, value, index] : m)

    {

        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

    }
    cout << "AM FACUT SET : " << endl;
    m.Set(50, "Cristina");
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    cout << "AM FACUT DELETE" << endl;
    m.Delete(20);
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    cout << "AM FACUT GET" << endl;
    const char* aici;
    m.Get(10, aici);
    cout << aici << endl;
    cout << "AM FACUT CLEAR" << endl;
    m.Clear();
    //Ar trebui sa nu afiseze nimic.
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    return 0;


}


