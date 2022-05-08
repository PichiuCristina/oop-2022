#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include<cstring>
#include <queue>
using namespace std;
ifstream fin("phrase.in");
static bool test (string c1, string c2)
{

    return c1>c2;
}

int main()
{
    string line;
    string result[50];
    int poz=0;

    if(getline(fin,line)==0)
    {
        cout<<"Eroare la deschiderea fisierului";
        return 0;
    }
    map <string,int> myMap;
    cout<<"Sirul de caractere citit este:" " "<<line.c_str();
    cout<<endl;
    cout<<endl;

    for(int i=0; i<line.size(); i++)
    {
        poz++;

        while(line[i]!=' '&&line[i]!='!'&&line[i]!='?'&&line[i]!='.'&&line[i]!=',')
        {
            if(line[i]>='A'&&line[i]<='Z')
            {
                line[i]=line[i]+32;
            }
            result[poz]+=line[i];
            i++;
        }

    }

//sortare lexicografica
    for(int i=1; i<poz; i++)
    {

          for(int j=i+1;j<=poz;j++){

            if(test(result[i],result[j])==1)
            {
                swap(result[i],result[j]);

            }
          }



    }


    for(int i=0; i<poz; i++)
    {
        if(result[i]!="")
            myMap[result[i]]++;
    }
    if(result[poz]!="")
        myMap[result[poz]]++;
    map<string,int>::iterator it;
    priority_queue<int> s;
    cout<<"Elementele din map nesortate(dupa frecventa): "<<endl;
    cout<<endl;
    for( it=myMap.begin(); it!=myMap.end(); it++)
    {
        cout<<it->first.c_str()<<"=>"<<" "<<it->second<<endl;
        s.push(it->second);
    }
    cout<<endl;
    cout<<"Elementele din map sortate(dupa frecventa): "<<endl;
    cout<<endl;
    while(s.empty()==false)
    {
        for( it=myMap.begin(); it!=myMap.end(); it++)
        {
            if(s.top()==it->second)
            {
                cout<<it->first.c_str()<<" => "<<it->second<<endl;

                s.pop();
            }
        }
    }

    return 0;
}
