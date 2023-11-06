/**
  Știm că un număr este divizibil cu 3 dacă suma cifrelor sale este divizibilă cu 3.

  Astfel, ca să văd dacă prin eliminarea unei cifre numărul rămas se divide cu 3,
de fapt verific dacă suma tuturor cifrelor din care scădem pe rând tot câte o cifră
din numărul dat rămâne divizibilă cu 3.
  Deci pentru rezolvare fac mai întâi suma TUTUROR cifrelor și din aceasta scad rând pe rând
câte o cifră
*/
#include <iostream>
using namespace std;

int main()
{
    int n,sc=0,copyn,nr=0;
    cin>>n;
    copyn=n;
    do///facem sc=suma cifrelor. Lucrez cu o copie ca să nu stricăm n
    {
        sc+=copyn%10;
        copyn/=10;
    }while(copyn);
    ///scădem rând pe rând câte o cifră a lui n din sumă:
    do
    {
        if((sc-n%10)%3==0)
            nr++;
        n/=10;
    }while(n);
    cout<<nr;
    return 0;
}
