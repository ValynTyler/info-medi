/*
Cerința
Se dă un număr real n. Să se afișeze rădăcina sa pătrată.

Date de intrare
Programul citește de la tastatură numărul real n.

Date de ieșire
Programul va afișa pe ecran numărul R, reprezentând rădăcina pătrată a lui n.

Restricții și precizări
1 ≤ n ≤ 1000
Numărul afișat va conține zecimale.
Se recomandă folosirea tipului double.
Exemplu:
Intrare

5
Ieșire

2.23607
Explicație
S-a citit numărul n=5 și s-a afișat rădăcina sa pătrată.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double n;
    cin >> n;
    cout << sqrt(n);

    return 0;
}
