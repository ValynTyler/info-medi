/**
 Metoda 1 - tractor - formăm efectiv numerele prin eliminarea DOAR a unei cifre.

Pentru identificarea cifrei respective NU folosim numărul ei de ordine CI puterea lui 10 care îi
corespunde.
Să zicem că numărul nostru este abcdef și că vrem să ștergem "c" = cifra miilor

nr=abcdef
 p=  1000

Ca să obținem numărul prin "ștergerea" lui c folosim calculele

nr= nr/(p*10)*p + nr%p

 luând p=1, p=10, p=100, ....  până când p îi corespunde cifrei a
*/
#include <iostream>
using namespace std;

int main()
{
    int n,aux,p=1,nr=0;
    cin>>n;
    while(p<=n)
    {
        aux=n/(p*10)*p+n%p;
        if(aux%3==0)
            nr++;
        p*=10;
    }
    cout<<nr;
    return 0;
}
