#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;
char sir[1001], * p, m[100][100];
int i,j,k, nr;
int main()
{
    //cin.get(sir, 1001);
    scanf("%[^\n]", &sir);
    p = strtok(sir, " ");
    while (p)
    {

        strcpy(m[++nr], p);
        p = strtok(NULL, " ");

    }

    for(i=1; i<nr; i++)
    {
        for(j=i+1; j<=nr; j++)
        {
            if(strlen(m[i])>strlen(m[j]))
                swap(m[i],m[j]);
        }


    }
    for(i=1; i<nr; i++)
    {
        for(j=i+1; j<=nr; j++)
        {
            if(strlen(m[i])==strlen(m[j]))
            {
                for(k=0; k<strlen(m[i]); k++)
                {
                    if(m[i][k]<m[j][k])
                    {
                        swap(m[i],m[j]);
                        break;

                    }
                    else

                  if(m[i][k]>m[j][k])
                    break;

                }
            }

        }
    }


    for(i=nr; i>=1; i--)
       {printf( "%s", m[i]);
       printf ("\n");
       }

        //cout << m[i]<<endl;

  return 0;

}
