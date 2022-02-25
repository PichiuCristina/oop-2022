#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

FILE *f1;
char r[100];
int suma, numar;

int convertire1(char c[256])
{
    int n=0;
    int p=1;
    if(c[strlen(c)-1] == '\n')
    {
        for(int i=strlen(c)-2; i>=0; i--)
        {
            if(c[i] >= '0' && c[i] <= '9')
            {
                n=(c[i]-'0')*p+n;
                p=p*10;
            }
        }
    }
    else
    {
        for(int i=strlen(c)-1; i>=0; i--)
        {
            if(c[i] >= '0' && c[i] <= '9')
            {
                n=(c[i]-'0')*p+n;
                p=p*10;
            }
        }
    }

    if(c[0] == '-')
        n = 0-n;

    return n;
}

int main()
{
    f1 = fopen("in.txt", "r");
    while(!feof(f1))
    {
        fgets(r, 100, f1);
        suma = suma + convertire1(r);
    }
    printf("Raspuns: %d", suma);
    fclose(f1);
    return 0;
}
