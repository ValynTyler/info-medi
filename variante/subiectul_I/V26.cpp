/**
1. c) -6  (care se obține dacă x=6 pt. că 6/7=0 iar 6%7=6

2. Citește n și afișează un șir format din ultima cifră a tuturor numrelor de la 1 la n.

Răspunsuri:

a) 1 2 3 4 5 6 7 8 9 0 1

b) mai jos

c)
citeste n (număr natural)
c <- 0
i <- 1
┌cât i<=n execută
│ c <- (c+1)%10
│ scrie c
│ i <- i+1
└■

d) 10 (cea mai mică valoare ca să se afișeze 1 de 3 ori este 21 iar cea mai mare 30
         deci de la 21 la 30 sunt 10 valori)
*/
#include <iostream>
using namespace std;

int main()
{
    int n,c=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=(c+1)%10;
        cout<<c;
    }
    return 0;
}
