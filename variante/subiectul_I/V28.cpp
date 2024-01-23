/**
1) b

Și anume, x/2/2==1 dacă x=4,5,6,7

2) O să explicăm what it is supposed to do (dar din păcate NU face acest lucru, o să vedem de ce):
 Dacă numărul reprezentat de partea întreagă a numărului coincide cu numărul reprezentat
de partea fracționară, afișează 1, în caz contrar afișează 2.

Mai jos sunt răspunsurile teoretice:
Răspunsuri:
a) 2

b) mai jos

c)
citeste x (număr real pozitiv)
y <- [x]
x <- x-y
┌dacă x≠[x] atunci
│┌execută
││ x <- x*10
│└cât timp x≠[x]
└■
┌dacă x=y atunci
│ scrie 1
│altfel
│ scrie 2
└■

d) 12.12


Obs: La implementarea în  C++ constatăm că se blochează în buclă infinită
dacă citim 120.12 (și nu numai).
  Deci problema de mai sus este valabilă d.p.d.v. teoretic, într-un pseudocod în care
reprezentarea numerelor reale NU pune probleme.

Problema constă în faptul că în C++ (și nu numai) numerele reale
se reprezintă într-un standard numit "floating point" (virgulă mobilă)
Acest standard reprezintă numerele în baza 2 și, din păcate, majoritatea numerelor
finite (ca zecimale) din baza 10 devin periodice (deci cu nr. infinit de zecimale)
în baza 2, și prin urmare, chiar dacă reprezentarea lor este destul de bună, nu este
exactă.
De exemplu, în loc de 0.12 se reprezintă 0.12000000000445
*/
#include <iostream>
using namespace std;

int main()
{
    double x,y;
    cin>>x;
    y=(int)x;
    x=x-y;
    while(x!=(int)x)
        x*=10;
    if(x==y)
        cout<<1;
    else
        cout<<2;
    return 0;
}
