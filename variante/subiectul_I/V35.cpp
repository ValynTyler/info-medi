/**
 1. c

 2. Algoritmul citește n și face suma puterilor tutururor factorilor săi primi.

Răspunsuri:
a) 4

b) Suma puterilor să fie 6.
Posibile răspunsuri:
    600
    144

c) mai jos

d) Toate nr. prime din intervalul dat:
   7 11 13 17 19 23
*/
#include <iostream>
using namespace std;

int main()
{
    int x,s=0,f=2,p;
    cin>>x;
    while(x>1)
    {
        p=0;
        while(x%f==0)
        {
            x/=f;
            p++;
        }
        s+=p;
        f++;
    }
    cout<<s;
    return 0;
}
