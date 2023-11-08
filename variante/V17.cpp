/**
 1. b

 2. Algoritmul afișează AB de un număr de ori egal cu câtul împărțirii întregi dintre
cel mai mare dintre numerele citite la cel mai mic.

Răspunsuri:

a) ABABABAB (AB de 4 ori deoarece câtul dintre 9 și 2 este 4)

b) 12 (iată-le mai jos)

acestea fiind:               căutăm numere cuprinse între 1 și 20 care
(6,1)   (1,6)               împărțite dau câtul 6, și le luăm în ambele feluri
(12,2)  (2,12)              deoarece if-ul inițial oricum le interschimbă.
(13,2)  (2,13)
(18,3)  (3,18)
(19,3)  (3,19)
(20,3)  (3,20)

c) mai jos

d)
 citeşte x,y(numere naturale)
┌dacă x<y atunci
│ x <- x-y
│ y <- x+y
│ x <- y-x
└■
┌dacă x≥y atunci   ///obs: acest "dacă" este redundant din cauza
│┌execută             ///interschimbării de mai sus, care ne garantează că x>=y
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
