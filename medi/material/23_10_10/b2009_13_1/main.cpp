/**
1. b

2. Algoritmul citește două numere a,b (a<=b) și determină câte dintre
numerele naturale cuprinse între a și b conțin CEL PUȚIN o cifră impară.

Răspunsuri:

a) 7 (405,407,409,410,411,412,413)

b) 61 și 62

c) mai jos

d)

citeşte a,b (numere naturale, a≤b)
k <- 0
i <- a
┌câ timp i<=b execută
│ n <- i; c <- 0
│ ┌cât timp n>0 execută
│ │ ┌dacă n%2=1 atunci
│ │ │ c <- c+1
│ │ └■
│ │ n <- [n/10]
│ └■
│ ┌dacă c>0 atunci
│ │ k <- k+1
│ └■
│ i <- i+1
└■
scrie k
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,k=0,n,c,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        n=i;c=0;
        while(n>0)
        {
            if(n%2==1)
                c++;
            n/=10;
        }
        if(c>0)
            k++;
    }
    cout<<k;
    return 0;
}
