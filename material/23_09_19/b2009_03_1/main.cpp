/**
 1. Răspuns corect: b)

a e incorect pt. că e valabil și pt. -2 și 2
c este o imposibilitate (fals orice am lua)
d este valabil fix în afara intervalului [-2,2]

 2. Se citește separat un număr z (îl numim "etalon", "valoare de referință")
și apoi un șir de numere a căror introducere se termină la întâlnirea valorii 0,
care se ia și el în seamă.
  Se compară diferența valorilor vecine citite (curentul minus precedentul) și, dacă
este mai mare decât etalonul se afișează ulima cifră a precedentului, dacă nu ultima
cifră a celui curent.

Răspunsuri:

a) 599350

etalon: 2
5 16 9 12 13 5 0
 V  V V  V  V V
 5  9 9  3  5 0

b) Posibile răspunsuri:
   5 3 7 3 1 0
   1 7 9 3 1 0

c)
citeşte z,x (numere naturale nenule)
┌dacă x>0 atunci
│┌execută
││ citeşte y (număr natural)
││ ┌dacă z<y-x atunci
││ │ scrie x%10
││ │altfel
││ │ scrie y%10
││ └■
││ x <- y
│└cât timp x>0
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int z,x,y;
    cin>>z>>x;
    while(x>0)
    {
        cin>>y;
        if(z<y-x)
            cout<<x%10;
        else
            cout<<y%10;
        x=y;
    }
    return 0;
}
