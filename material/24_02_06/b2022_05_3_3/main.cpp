/**
  Citim numerele din fișier menținând în două variabile ultimele două valori citite.
Într-un contor reținem lugimea secvenței paritare curente, adică cea care se termină
cu ultimul număr citit.
  Comparând ultimele două valori citite, dacă ele au aceeași paritatea contorul crește,
dacă nu se resetează la 1.
  Maximul acestui contor împreună cu numărul lui de apariții reprezintă soluția problemei.

  Alg. este eficient d.p.d.v. al timpului de executare deoarece face puțini pași pentru
că parcurge datele de intrare o singură dată.
  Alg. este eficient d.p.d.v. al memoriei deoarece utilizăm doar câteva variabile simple
(nu utilizăm tablouri sau alte date structurate) memoria totală ocupată de variabilele
programului fiind de ... byte.
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int x,a,nrsec=0,l=1,lmx=-1;
    f>>a;///a=anteriorul; x=curentul
    while(f>>x)
    {
        if(a%2==x%2)
            l++;
        else
            l=1;
        if(l>lmx)
        {
            lmx=l;nrsec=1;
        }
        else
            if(l==lmx)
                nrsec++;
        a=x;
    }
    cout<<nrsec<<" "<<lmx;
    return 0;
}
