#include <iostream>

using namespace std;
/*
Subiectul al III-lea
--------------------
1.
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

2. orice mai mare ca 5?
Răspunsuri: 42, 43, 44, ...

3.
(Mai jos)
*/

int resturi(int n, int x, int y, int r) {
    int output = 0;
    for (int i = 0; i < n; i++) {
        if (i % x == r && i % y == r) {
            output += 1;
        }
    }
    return output;
}

int main() {

    // cout << resturi(200, 5, 14, 2);

    return 0;
}
