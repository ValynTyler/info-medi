#include <iostream>

using namespace std;

/*
I.
1.
a = (20*23)/4
b = (10 * 23) / 2 = 230/2 = 115
c = (20*23)/2
d = ((20*23)/2)*2

R: d)

2.
f(23): f(11) 1
f(11): f(5) 1
f(5): f(2) 1
f(2): f(1) 0 
f(1): f(0) 1
f(0): 0


Consolă: 
010111

R: c)

3.
s = bac2023
s[s[2]-a] = s[c-a] = s[2] = \0
strlen(s) = 2 => k = 2;
c)

4.
d)

5.
c) 3

II
1.
a)
c = 'cifra'
m = 'maxim'

// ca sa se scrie "nul", x ar trebui sa fie < 0

// c ia in parte fiecare cifra de la coada la cap

// alg asigura ca cif este ordonata de la coada la cap crescator,
// prin taierea cifrelor mai mici ca un maxim

R: 9752

b)
R: 32, 96

c)
(mai jos)

d)
citeşte x (număr natural) 
 p <- 1; m <-  -1 
┌daca p <= x atunci
│┌repeta 
││ c <- [x/p]%10 
││┌dacă c>m atunci  
│││ m <- c; p <- p*10 
│││altfel  
│││ x <- [x/(p*10)]*p+x%p 
││└■ 
│└pana cand p>x
└■
┌dacă m≥0 atunci scrie x 
│ altfel scrie "nul" 
└■

2.
(mar, ploaie, rau)
---
(ocean, ploaie, rau)

3.
(mai jos)
*/

struct stoc {
    int nrFire;
    int pretFir;
};

struct lalea {
    char denumire[21];
    stoc stoc;
}f;

int main() {
    int x;
    cin >> x;

    int p = 1;
    int m = -1;

    int c;

    while (p <= x) {
        c = (x/p) % 10;
        if (c > m) {
            m = c;
            p *= 10;
        } else {
            x = (x/(p*10)) * p + x % p;
        }
    }

    if (m >= 0) {
        cout << x;
    } else {
        cout << "null";
    }
}
