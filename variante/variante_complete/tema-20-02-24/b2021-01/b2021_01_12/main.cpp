#include <iostream>

using namespace std;
/*
SUBIECTUL I
1. a)
2.
f(n, c) == 2021
f(200211, 2) = 1 + 10 * f(20021, 2) = 20
f(20021, 2) = 1 + 10 * f(2002, 2) = 10
f(2002, 2) = f(200, 2) = 0
f(200, 2) = 0 + 10 * f(20, 2) = 0
f(20, 2) = 0 + 10 * f(2, 2) = 0
f(2, 2) = f(0, 2) = 0
f(0, 2) = 0
f(312032, 3) = 2 + 10 * f(31203, 3) = 2 + 10 * 120 = 12002
f(31203, 3) = f(3120, 3) = 120
f(3120, 3) = 0 + 10 * f(312, 3) = 0 + 10 * 12 = 120
f(312, 3) = 2 + 10 * f(31, 3) = 2 + 10 * 1 = 12
f(31, 3) = 1 + 10 * f(3, 3) = 1 + 10 * 0 = 1
f(3, 3) = f(0, 3) = 0

d)

3. d)
4. b)
5. c)

SUBIECTUL II
1.
a) 1 1 1 1 1 2 1 1 2 1

b)
6  -> 1 1, 1 1, 1 2 1, 1 2 1, 1 2 1;
15 -> 1 1, 1 1, 1 1, 1 2 1, 1 2 1, 1 2 1;

c) Mai jos

d)
citește x,y
  (numere naturale nenule)
┌dacă x>y atunci x <-> y
└■
 nr <- 1
 i <- 0
┌cât timp i < (y-x) execută
│i <- i + 1
│scrie 1
│┌dacă nr≥x atunci
││ scrie 2
│└■
│ nr <- nr*3
│ scrie 1
└■

2.
{
    cinteză         = 1,
    ciocârlie       = 2,
    mierlă          = 3,
    privighetoare   = 4,
    scatiu          = 5
}

Reguli:
    1. Grupuri formate din CEL PUTIN 2 pasari distincte
    2. NU conteza ordinea
    3. 3 exclude 4

sol_1 = {1, 2}
sol_2 = {1, 2, 3}
sol_3 = {1, 2, 3, 5}
sol_4 = {1, 2, 4}

sol_n
    = {2, 4, 5}
sol_n + 1
    = {2, 4, +} NU
    = {2, 5, +} NU
    = {3, 1} NU
    = {3, 2} NU
    = {3, 3} NU
    = {3, 4} NU
    = {3, 5}
sol_n + 2
    = {3, 5} NU
    = {3, 5, +} NU
    = {4, 5}

3.
fs = fractie {
    2020 - f.a,
    2021 - f.b
}
*/

int main() {

    return 0;
}
