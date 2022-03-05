#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList L;
    L.Init();
    L.Add(7);
    L.Add(4);
    L.Add(3);
    L.Add(9);
    L.Add(60);
    L.Add(1);
    L.Add(2);
    L.Add(14);
  /*
    L.Add(23);
    L.Add(41);
    L.Add(90);
 */
    L.Sort();
    L.Print();

    return 0;
}
