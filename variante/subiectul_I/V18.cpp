/**
1. a

2. Afișează tot atâtea asteriscuri câte numere impare sunt în intervalul determinat
de minimul dintre x și y și maximul lor.

Răspunsuri:

a) ****

b) 0, 1, 157, 158

Obs: trebuie ca în intervalul definit de [min(x,y) și max(x,y)] să fie exact 40 de numere impare.

Dacă x și y sunt ambele impare, numărul de valori impare din intervalul [x,y] este (y-x)/2+1;

Dacă luăm y=79, în intervalul [1,79] sunt exact (79-1)/2+1 = 40 de numere impare.
Deci și în intervalul [0,79] sunt tot atâtea numere impare

Dacă luăm x=79 (ne gândim că s-a făcut interschimbarea) în intervalul [79,157] sunt
exact (157-79)/2+1 = 78/2+1 = 39+1 = 40 de numere impare
și tot atâtea sunt și în intervalul [79,158]

c)

d)
citeşte x,y
(numere naturale)
┌dacă x>y atunci
│ y <--> x
└■
┌dacă x%2=0 atunci
│ x <- x+1
└■
┌dacă x≤y atunci  ///dacă-ul acesta nu e redundant, datorită cazurilor x=y=par
│┌execută         ///cazuri pe care alg. original NU intră pe while, iar dacă n-am
││ x <- x+2       ///pune acest "dacă" ar intra și-ar afișa un asterisc
││ scrie ‘*’
│└cât timp x≤y
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int x,y,aux;
    cin>>x>>y;
    if(x>y){aux=x;x=y;y=aux;}
    if(x%2==0)x++;
    while(x<=y)
    {
        x+=2;
        cout<<"*";
    }
    return 0;
}
