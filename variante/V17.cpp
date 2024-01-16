/**
1. b

2. Citește două numere naturale și afișează un număr de perechi AB egal cu câtul împărțirii
celui mai mare la cel mai mic

Răspunsuri:
a) ABABABAB

b) mai întâi o precizare: într-o pereche contează ordinea scrierii (gen (1,3)!=(3,1) )
  Răspuns: 12

(ca să afișeze 12 caractere <=> sunt 6 perechi.
 Întrebarea se traduce deci prin: câte sunt perechile de numere din intervalul [1,20] cu câtul 6
(6,1) și (1,6)
(12,2) și (2,12)
(13,2) și (2,13)
(18,3) și (3,18)
(19,3) și (3,19)
(20,3) și (3,20)

c) mai jos

d)
citeşte x,y (numere naturale)
┌dacă x<y atunci
│ x <- x-y
│ y <- x+y
│ x <- y-x
└■
┌dacă x≥y atunci  ///dacă-ul este redundant, din cauza interschimbării de mai sus
│┌execută
││ scrie ’A’
││ x <- x-y
││ scrie ’B’
│└cât timp x≥y
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        x=x-y;
        y=x+y;
        x=y-x;
    }
    while(x>=y)
    {
        cout<<"A";
        x=x-y;
        cout<<"B";
    }
    return 0;
}
