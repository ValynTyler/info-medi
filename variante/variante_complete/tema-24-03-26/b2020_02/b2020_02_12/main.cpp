#include <iostream>

using namespace std;

/*
Subiectul I
-----------
1. (1000-999) % 1000 = 1 < 0 => a
2.
f(9) => f(4), 9 => 0, 0, 7, 1, 2, 4, 9
f(4) => 0, f(2), 4 => 0, 0, 7, 1, 2, 4
f(2) => 0, f(1), 2 => 0, 7, 1, 2
f(1) => 7, 1
=> d

3.
{
    aperitiv    = 1,
    desert      = 2,
    legume      = 3,
    paste       = 4,
    salata      = 5,
    supa        = 6;
}

Reguli:
    - 1 este mereu primul (daca apare)
    - 2 este mereu ultimul (daca apare)
    - 3 exclude 5
    - 6 apare inainte de 4 (daca apar)

4: (1, 4, 3, 2)
5: (1, 4, 5, 2)
6: (1, 4, 6, x) NU
6: (1, 5, 1, x) NU
6: (1, 5, 2, x) NU
6: (1, 5, 3, x) NU
6: (1, 5, 4, 1) NU
6: (1, 5, 4, 2)
=> (aperitiv, salata, paste, desert)
=> a

4.
(1, 2, 5),
(3, 4),
=> 2
=> b

5. 10 => c

Subiectul II
------------
1.
// programul afiseaza suma primilor n termeni cititi (unde n este
// defapt primul numar citit) in urma detasarii
// pentru fiecare termen a sufixului format din cifre ordonate
// crescator, uneori, golind chiar intregul numar
// algoritmul afiseaza "niciunul" in cazul in care niciun termen
// citit nu are cifre dispuse descrescator

a) 0 + 20 + 100 + 0 + 1900 => 2021
b) 123, 124, 125, etc (orice numar cu cif. ord. crescator)
c) (Mai jos)
d)
citește n (număr natural nenul) 
 m<-0 
 i<-1
┌cât timp i <= n execută
│ citește x (număr natural) 
│┌cât timp x%10 > [x/10]%10 execută  
││ x<-[x/10] 
│└■ 
│ m<-m+x 
└■ 
┌dacă m>0 atunci scrie m 
│altfel scrie „niciunul” 
└■

*/

int main() {
    int n;
    cin >> n;

    int m = 0;
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        while ((x % 10) > (x/10)%10) {
            x /= 10;
        }
        m += x;
    }

    if (m > 0) {
        cout << m;
    } else {
        cout << "niciunul";
    }

    return 0;
}
