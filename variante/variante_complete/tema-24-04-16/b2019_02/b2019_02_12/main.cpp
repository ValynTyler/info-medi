#include <iostream>

using namespace std;

/*
Subiectul I
-----------
1.
a. m < n => true
b. m == M => false
c. M == m + N - n => true
d. N == M + 1 => true
=> b

2.
f(75, 30): 75 f(45, 30)
f(45, 30): 45 f(15, 30)
f(15, 30): 15 f(15, 15)
f(15, 15): 15
=> c

3.
{
    cararmel = 1,
    ciocolat = 2
    frisca   = 3,
    nuci     = 4,
    vanilie  = 5,
}

Reguli:
    1. strat III MEREU 3 SAU 5
    2. strat I sau II NICIODATA 3 SAU 5

1: (1, 2, 3)
2: (1, 2, 5)
3: (1, 4, 3)
4: (1, 4, 5)

=>
5: (1, 5, x) NU (reg 2)
5: (2, 1, 3)
=> a

4.
    1
   /|\
  / | \
2   3   4
|
|
5

4 + 1 = 5 => d.

5.
(a), (c) si (d) nu e pt ca suma nu e PARA
= > b

Subiectul II
------------
1.
Alg. listeaza, in forma unui numar, in ordine crescatoare,
cifrele ce apar in numarul citit n.

a) 1227
b) 101, 110, 1100
c) (Mai jos)
d) 

2.
int len = strlen(a);
if (len < 3) {
    b = "nedetermiant";
} else {
    b = a + len - 4;
}

3.
c.x == p.x && c.y == p.y
// struct punct centru??

*/

int main() {
  
    return 0;
}
