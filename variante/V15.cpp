/**
1. d

2. Algoritmul citește a și n și calculează suma:
     a+1-4+9-16+....   (se adună pătratele imparelor, se scad pătratele parelor)

Răspunsuri:

a) 4

b) mai jos

c) 4

d) răspunsul simplu:
     a <- 0

   răspunsul complicat: (deci la pașii pari scădem ceea ce am adunat la pasul trecut impar,
                         adică aducem a-ul la loc la valoarea 0)
      a <- a+(i-1)*(i-1)
*/
#include <iostream>
using namespace std;

int main()
{
    int a,n,i;
    cin>>a>>n;
    for(i=1;i<=n;i++)
        if(i%2==0)
            a-=i*i;
        else
            a+=i*i;
    cout<<a;
    return 0;
}
