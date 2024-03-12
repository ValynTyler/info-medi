#include <iostream>

using namespace std;

/*
Subiectul I
-----------
1. d
2. b
3. a
4. c
5. c

Subiectul II
------------
a) 3 4 8 9 15 
b) 1 1 1, 2 1 1
c) (Mai jos)
d)
citește n,x,y  
  (numere naturale nenule, x≤n, y≤n) 
 ok <- 0 
 i <- 1
┌cat timp i <= 1 execută 
│┌dacă (i%x=0 și i%y≠0) sau  
││     (i%x≠0 și i%y=0) atunci  
││ scrie i, ' ' 
││ ok <- 1 
│└■ 
└■ 
┌dacă ok=0 atunci scrie 0 
└■

2.
s = [A, R, M, O, N, I, A]

3.
a[0].dp.anNastere = 2000;
a[0].venit = 4000;

*/

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    bool ok = false;

    for (int i = 1; i <= n; i++) {
        if (((i % x == 0) && (i % y != 0)) ||
            ((i % x != 0) && (i % y == 0))) {
            cout << i << ' ';
            ok = true;
        }
    }
    if (!ok) {
        cout << 0;
    }

    return 0;
}
