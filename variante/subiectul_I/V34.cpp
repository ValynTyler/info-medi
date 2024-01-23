/**
1. a

2. Ia ultima cifră de la fiecare număr. Afișează mai întâi numărul
   ab a.î. a<=b și apoi toate numerele derivate din acesta
în care prima cifră crește și a doua scade, cât timp prima cifră
rămâne mai mică sau egală cu a doua.
Răspunsuri:
a) 38, 47, 56

b) posibile soluții:
   171 2339 (pt. care se afișează 19 28 37 46 55)
   40 518 (pt. care se afișează 8, 17, 26, 35, 44_
   40 519 (pt. care se afișează 9, 18, 27, 36, 45)

c) mai jos

d)

citeşte x,y (numere naturale)
x <- x%10
y <- y%10
┌dacă y<x atunci
│ aux <- y
│ y <- x
│ x <- aux
└■
j <- y
┌pentru i <- x,[(x+y)/2] execută
│ scrie i*10+j
│ j <- j-1
└■
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y,aux;
    cin>>x>>y;
    x=x%10;y=y%10;
    if(y<x){aux=y;y=x;x=aux;}
    while(x<=y)
    {
        cout<<x*10+y<<" ";
        x++;y--;
    }
    return 0;
}
