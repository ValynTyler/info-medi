/**
 1. a

 2. Algoritmul citește un șir de numere a căror introducere se termină la întâlnirea
valorii 0, care NU face parte din șir.
  Formează un număr cu cifra maximă de la fiecare valoare citită.

Răspunsuri:
a) 27596

b) Posibile răspunsuri:
   712 54 10 0
   276 154 1010 0

c) mai jos

d)

citeşte x (număr natural)
n <- 0
┌dacă x≠0 atunci  ///acest dacă este obligatoriu (altfel se mai face o citire dacă băgăm iniț. x=0)
│┌execută
││ y <- x; c <- 0
││┌dacă y>0 atunci ///acest al doilea dacă, în schimb, este redundant. Și dacă-l omitem ,alg.
│││┌execută           ///face același lucru
││││ ┌dacă y%10>c atunci
││││ │ c <- y%10
││││ └■
││││ y <- [y/10]
│││└cât timp y>0
││└■
││ n <- n*10+c
││ citeşte x
│└cât timp x≠0
└■
scrie n
*/
#include <iostream>
using namespace std;

int main()
{
    int x,n=0,c,y;
    cin>>x;
    while(x)
    {
        y=x;c=0;
        while(y>0)
        {
            if(y%10>c)
                c=y%10;
            y/=10;
        }
        n=n*10+c;
        cin>>x;
    }
    cout<<n;
    return 0;
}
