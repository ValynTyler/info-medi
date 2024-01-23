/**
1. b

2. Calculează b=(a+1)*(a+2)/2 (adik suma Gauss până la a+1)
Și afișează restul și mai apoi câtul dintre b și a.

Răspunsuri:
a) 1 6

b) 2 valori
  (și anume 3, 5)
verificare:
  a=1 => b=3
  a=2 => b=6
  a=3 => b=10
  a=4 => b=15
  a=5 => b=21

c)  mai jos

d)
    citeşte a (număr natural, a>0)
    b <- [(a+1)*(a+2)/2]
    scrie b%a,' ',[b/a]
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,k=0;
    cin>>a;
    b=(a+1)*(a+2)/2;
    while(b>=a)
    {
        b-=a;
        k++;
    }
    cout<<b<<" "<<k;
    return 0;
}
