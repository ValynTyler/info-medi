/**
1. b
(tre' s-avem grijă să nu facem împărțiri cu zecimale)

2. Se citesc două numere. Algoritmul afișează toate valorile impare dintre ele,
în ordine descrescătoare (dintre maximul și minimul lor).

Răspunsuri:
a) 17 15 13 11 9 7 5

b) Perechile ce pot fi citite sunt:
(1 -1)          (-1 1)
(1 -2)          (-2 1)
(2 -1)          (-1 2)
(2 -2)          (-2 2)

c)

citeşte a,b (numere întregi)
┌dacă a<b atunci
│ a <-> b
└■
x <- a
┌cât timp x>=b execută
│ ┌dacă x%2≠0 atunci
│ │ scrie x,’ ’
│ └■
│ x <- x-1
└■

d) mai jos
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,aux,x;
    cin>>a>>b;
    if(a<b)
    {
        aux=a;a=b;b=aux;
    }
    for(x=a;x>=b;x--)
        if(x%2!=0)
            cout<<x<<" ";
    return 0;
}
