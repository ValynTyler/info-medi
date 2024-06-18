#include <iostream>

using namespace std;

/*
Subiectul I
-----------
1.
a NU E pt. că z < x
2*z == 3*y => z > y => c NU E, d NU E
=> b

2.
 - `n` e mereu pozitiv
 - alg. reține cifra maximă din `n`, descompunându-l de la coada la cap,
 formând nr. `x` din cif. maxime locale tot de la coadă la cap
a) => 10523 va ieși ca 55533
b) 722, 712, 702, -702, ...
c)
citeşte n 
   (număr întreg) 
 m ← 0 
 p ← 1 
 x ← 0 
┌dacă n<0 atunci 
│ n ← -n 
└■ 
┌cât timp n != 0 execută
│ c ← n%10
│ n ← [n/10] 
│┌dacă c>m atunci 
││ m ← c 
│└■ 
│ x ← m*p+x 
│ p ← p*10 
└■ 
 scrie x
*/

int main() {
    int n;
    int m = 0;
    int p = 1;
    int x = 0;

    cin >> n;
    if (n < 0) {
        n = -n;
    }

    int c;
    do {
        c = n % 10;
        n /= 10;
        
        if (c > m) {
            m = c;
        }

        x = m*p + x;
        p *= 10;

    } while (n != 0);

    cout << x;

    return 0;
}
