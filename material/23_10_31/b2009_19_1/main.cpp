/**
1. b
(atenție, trebuie numărate și cele de dinainte de while)

2. Algoritmul citește două numere a și b și înlocuiește fiecare dintre valori
cu valoarea formată doar din ultimele lor 2 cifre (într-un mod complicat)
 Apoi, pentru toate numerele din intervalul [a,b] care au cifrele egale afișează valoarea
acelor cifre.

Răspunsuri:
a) 234 (sau 2 3 4)

b) Posibile răspunsuri:
   617 3734
   17 34
   22 33

c) mai jos

d)
citeşte a,b (numere naturale)
a <- [a/10]%10*10+a%10
b <- [b/10]%10*10+b%10
i <- a
┌cât timp i <=b execută
│┌dacă[i/10]=i%10 atunci
││ scrie i%10
│└■
│ i <- i+1
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    a=a/10%10*10+a%10;
    b=b/10%10*10+b%10;
    for(i=a;i<=b;i++)
        if(i/10==i%10)
            cout<<i%10;
    return 0;
}
