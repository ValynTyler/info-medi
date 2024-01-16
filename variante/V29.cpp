/**
1. a

2. Citește două numere și afișează partea întreagă a mediei lor aritmetice.

Răspusuri:
a) 9

b) Mai jos

c) Posibile:
   10 10
   11 9
   9 11
   9 12
   12 9

d) citeste n,m
   scrie [(n+m)/2]
*/
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    while(n<=m)
    {
        n++;m--;
    }
    while(m<n)
    {
        m++;
        n--;
    }
    cout<<n;
    return 0;
}
