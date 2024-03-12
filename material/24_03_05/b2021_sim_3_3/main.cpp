/**
  Folosim un vector de numărare pentru a determina numărul de apariții ale fiecărui
model de dimensiuni diferite.
  Avem doar 10 dimensiuni posibile (de la 1 la 10) deci acest vector are doar 10 elemente
utilizate.
  Pe baza acestuia determinăm rezultatul cerut.

  Algoritmul este eficient d.p.d.v. al timpului de executare deoarece parcurge o singură
dată fișierul de intrare după care mai face un număr constant de 10 pași pentru determinarea
rezultatului
*/
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int nr[11];///fiind global este inițializat implicit cu 0

int main()
{
    int x,i,suma=0;
    while(fin>>x)
        nr[x]++;
    for(i=1;i<=10;i++)
        if(nr[i])
            suma+=10+i*i*nr[i];
    cout<<suma;
    return 0;
}
