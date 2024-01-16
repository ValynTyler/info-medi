/**
1. c

2. Citește n și k și formează un număr plecând de la n prin dublarea cifrelor
egale cu k.

Răspunsuri:
a) 122322

b) 11 1
   22 2
   33 3
   ....
   99 9

c)
citeşte n,k (numere naturale, k≤9)
nr <- 0; p <- 1
┌dacă n≠0 atunci ///acest dacă este redundant
│┌execută
││ c  <-  n%10
││ nr  <-  nr+c*p
││ p  <-  p*10
││ ┌dacă c=k atunci
││ │ nr  <- nr+c*p
││ │ p <- p*10
││ └■
││ n  <-  [n/10]
│└cât timp n≠0
└■
n <- nr
scrie n
*/
#include <iostream>
using namespace std;

int main()
{
    int n,k,nr=0,p=1,c;
    cin>>n>>k;
    while(n)
    {
        c=n%10;
        nr+=c*p;
        p*=10;
        if(c==k)
        {
            nr=nr+c*p;
            p*=10;
        }
        n/=10;
    }
    n=nr;
    cout<<n;
    return 0;
}
