/**
 1. a

 2. Algoritmul simulează adunarea cifră cu cifră (adică așa cum fac oamenii pe foaie)
deci afișează suma dintre a și b

Răspunsuri:
a) 2329

b) mai jos

c)

citeste a,b
(numere naturale)
c <- 0
d <- 0
p <- 1
┌dacă a+b+c>0 atunci   ///dacă-ul acesta este redundant - poate fi omis
│┌execută
││ c <- a%10+b%10+c
││ d <- d+(c%10)*p
││ p <- p*10
││ a <- [a/10]
││ b <- [b/10]
││ c <- [c/10]
│└cât timp a+b+c>0
└■
scrie d

d)
citeste a,b
scrie a+b
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0,d=0,p=1;
    cin>>a>>b;
    while(a+b+c>0)
    {
        c=a%10+b%10+c;
        d=d+c%10*p;
        p*=10;
        a/=10;
        b/=10;
        c/=10;
    }
    cout<<d;
    return 0;
}
