#include <iostream>

using namespace std;

/**

Subiectul I
-----------
1. c pentru că (x/y)*y == x <==> rest(x/y) == 0
2. alg. face suma pătratelor cifrelor numărului `n`.
deci:
a) 2^2 + 0^2 + 1^2 + 8^2 = 4 + 0 + 1 + 64 = 69
b) 860, 680, 608, 806, ...
c)
citeşte n
   (număr întreg nenul)
┌dacă n<0 atunci
│ n<-(-n)
└■
 s<-0
┌repetă
│ x<-n%10
│ s += x*x
│ n<-[n/10]
└până când n=0
scrie s

*/

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    int s = 0;
    int x;

    do {
        x = n % 10;
        for (int i = 0; i < x; i++) {
            s += x;   
        }
        n /= 10;
    } while (n);

    cout << s;

    return 0;
}
