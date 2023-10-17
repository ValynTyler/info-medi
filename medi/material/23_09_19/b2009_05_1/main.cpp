/**
1. c

2. Se citesc două numere, x și z.
Din x se formează un număr y, cu cifrele luate din 2 în 2 poziții, de la dreapta
la stânga, începând de la ultima.
  Apoi se verifică (într-un mod foarte complicat) dacă y este egal cu z.
  Dacă da, atunci se afișează 1. Dacă nu, se afișează 0.

Răspunsuri

a) 1

(formează y=532 care este egal cu z-ul introdus 532)

b) Ca să afișeze valoarea 0, trebuie să NU afișeze 1 (DĂĂĂĂĂ)
Am subliniat acest lucru deoarece, dat fiind z=99 sunt mult mai puține cele pt. care
se afișează 1, decât cele pt. care se afișează 0.
  Mai precis, cele pentru care se afișează 1 sunt 909,919,929,...,999 (10 bucăți)

Deci toate restul de 3 cifre (! în total există 900 de numere de 3 cifre, și anume
de la 100 la 999) adică 900-10 = 890 produc afișarea valorii 0.

Răspuns corect: 890 de numere

c) Rezolvarea acestui subpunct se bazează pe faptul că ne-am dat seama că
a doua repetitivă urmată de if-ul de după ea verifică în cel mai complicat mod cu
putință dacă y==z.
  Pur și simplu le înlocuim pe ambele cu un simplu if

citeşte x,z (numere naturale)
y <- 0
┌repetă
│ y <- y*10+x%10
│ x <- [x/100]
└până când x=0
┌dacă y=z atunci
│ scrie 1
│altfel
│ scrie 0
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>z;
    y=0;
    do
    {
        y=y*10+x%10;
        x/=100;
    }while(x);
    while(y*z>0 && y%10==z%10)
    {
        y/=10;
        z/=10;
    }
    if(y+z==0)
        cout<<1;
    else
        cout<<0;
    return 0;
}
