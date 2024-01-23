/**
1. c

2. Programul citește a și n  și calculează și afișează suma:
     a+3-4+3-4+3-4.... (după a urmează n termeni)

Deci (asta ne ajută la d) dacă n este par, valoarea finală este de fapt a-n/2
iar dacă n este impar valoarea finală este: a-[n/2]+3
(Dacă vrem să fim ultra-eficienți să  nu mai folosim if, putem reuni aceste 2 rezultate
 sub aceeași pălărie:    a-[n/2]+(n%2)*3 )

Răspunsuri:
a) 7

b) n=3

c) mai jos

d)
Varianta classique:
citeste n
┌dacă n%2=0 atunci
│  scrie a-n/2
│altfel
│  scrie a-[n/2]+3
└■

Varianta jmekeră:
citeste n
a-[n/2]+(n%2)*3
*/
#include <iostream>
using namespace std;

int main()
{
    int a,n,j=3,i;
    cin>>a>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            a=a-j;
        else
            a=a+j;
        j=7-j;
    }
    cout<<a;
    return 0;
}
