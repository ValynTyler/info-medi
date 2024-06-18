/**
Subiectul al III-lea
--------------------
1. a

{
    PHP     = 1,
    Java    = 2,
    Python  = 3,
    C#      = 4,
    SQL     = 5,
}

Reguli:
 - nr PAR (nenul) de limbaje
 - 2 EXCLUDE 3
 - contează ORDINEA
 - un limbaj apare O DATĂ

1: (1, 2)
2: (1, 2, 4, 5)
3: (1, 2, 5, 4)
4: (1, 3)
5: (1, 3, 4, 5)
.
.
.
n: (2, 1, 5, 4)
n+1: ?
n+1: (2, 1, 5, x) NU
n+1: (2, 1, x, x) NU
n+1: (2, 2, x, x) NU
n+1: (2, 3, x, x) NU (reg II)
n+1: (2, 4) !!! => a.

2. orice mai mare ca 5
Răspunsuri: 42, 43, 44, ...

3.
(Mai jos)
*/
#include<iostream>
using namespace std;
///versiunea asta are complexitatea O(n)
int resturi(int n, int x, int y, int r) {
    int output = 0;
    for (int i = 1; i <= n; i++) {
        if (i % x == r && i % y == r) {
            output += 1;
        }
    }
    return output;
}

/**versiunea eficientă:
  fie i un număr cu proprietatea cerută, adică din intervalul [1,n] a.î i%x==r și i%y==r
  i%x==r <=> (i-r) divide x
  i%y==r <=> (i-r) divide y

DECI i-r este un multiplu comun de x și y.
  Deci dacă determinăm cmmdc, atunci valorile pe care le poate lua (i-r) sunt de fapt
toți multiplii cmmdc-ului care se încadrează în intervalul cerut.

 Să nu uităm că i <=n deci i-r <= n-r

Deci, dacă avem cmmmc-ul, răspunsul este simplu: (n-r)/cmmmc+1

Pe cazul nostru x=5, y=14 => cmmmc-ul este 70 => multiplii ceruți (dat fiind că restul este 2)
ar fi 2, 72, 142 (următorul ar fi 212)

Versiunea asta are complexitate logaritmică (de la cmmdc - pe care-l facem eficient cu
alg. lui Euclid)
*/

int resturi_euclid(int n, int x, int y, int r)
{
    int a=x,b=y,rr,cm;
    while(b)
    {
        rr=a%b;a=b;b=rr;
    }
    cm=x/a*y;
    return (n-r)/cm+1;
}

int main() {

    int n=211;
    cout << resturi(n, 5, 14, 2)<<"\n";
    cout << resturi_euclid(n, 5, 14, 2);
    return 0;
}
