#include <iostream>

using namespace std;

/*
Subiectul I:
1.
a = 4044/4/2 = 1011/2 != 2022
b = 4044/(4*2) = 4044/8 != 2022
c = 1011*1 + 1 != 2022
d = 1011*1+1 = 2022

Răspuns: d.

2.
functia returneaza in 3 instante:
    - return 0
    - return n*10 + 2
    - return f(n/10, p-1)

f(x, 0) = 2022
    => x*10 + 2 = 2022
    => x = 202

functia taie ultimele `p` cifre asa că:

f(x, 3) = 2022
    => x*10 + 2 = 2022
    => x = 202***

Răspuns: c.

3.
{
    Dokker  = 1,
    Duster  = 2,
    Lodgy   = 3,
    Logan   = 4,
    Sandero = 5
}

Reguli:
    1. alegem 3 mașini distincte
    2. 1 exclude 2
    3. 5 nu este primul
    4. 4 NU precede 1 SAU 2
    5. contează ordinea

Soluții:
    1. {1, 3, 4},
    2. {1, 3, 5},
    3. {1, 4, 3},
    4. {1, 4, 5},
    5. {1, 5, 3},
    .
    .
    .
    ultima = 
    {5, x, x} NU E BUNĂ (reg. 5) =>
    {4, 5, 3}

    penultima =
    {4, 5, 2} NU E BUNĂ (reg. 4)
    {4, 5, 1} NU E BUNĂ (reg. 4)
    {4, 4, x} NU E BUNĂ (reg. 1) =>
    {4, 3, 5} 

Răspuns: a.

4.
Răspuns: c.

5. Uhmmm what?
dacă nodul 1 este nevoit să fie rădăcină, și in același timp să aibă 0 fii,
nodul 7 nu poate avea mai mult de 0 frați

Subiectul II 1.
a. 37, 23;
b. (230, 230) sau (230, 370)
c. (Mai jos)
d.
citeşte n (număr natural) 
x<-n%100 
┌dacă x>1 atunci 
│ p<-(x%2)*(x%3)*(x%5)*(x%7) 
│┌dacă p<-0 atunci 
││ scrie x,’ ’   
│└■ 
└■ 
n<-[n/10] 
┌cât timp n >= 10 repetă 
│ x<-n%100 
│┌dacă x>1 atunci 
││ p<-(x%2)*(x%3)*(x%5)*(x%7) 
││┌dacă p<-0 atunci 
│││ scrie x,’ ’   
││└■ 
│└■ 
│ n<-[n/10] 
└■

2.
[1,2], [1,3], [1,5], [2,3], [2,5]

3.
s = 0;
for (i = 0; i < 15; i++) {
    s += t[i].nrLocuri * t[i].pret;
}

*/

int main() {

    int n;
    cin >> n;

    int x;
    int p;

    do {
        x = n % 100;
        if (x > 1) {
            p = (x%2) * (x%3) * (x%5) * (x%7);
            if (p != 0) {
                cout << x << " ";
            }
        }
        n /= 10;
    }
    while(n >= 10);

    return 0;
}
