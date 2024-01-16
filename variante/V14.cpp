/**
1. a

2. Citește un șir de numere a cărui introducere se termină cu 0, care nu se ia în seamă.
Formează un număr care are ca cifre cifra maximă de la fiecare dintre valorile introduse.

Răspunsuri:
a) 27596

b) Posibile răspunsuri:
   372 554 100 0
   70 50 10 0

c) mai jos

d)
citeşte x (număr natural)
n <- 0
┌dacă x≠0 atunci ///acest dacă este obligatoriu, în caz contrar dacă se citește inițial 0
│┌execută          ///ar mai face o citire, deci n-ar fi echivalent cu cel dat
││ y <- x; c <- 0
││┌dacă y>0 atunci    ///pe când ăsta ESTE redundant - când se ajunge aici sigur y>0
│││┌execută              ///pt. că l-a primit pe x mai sus
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
    int x,n,y,c;
    cin>>x;
    n=0;
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
