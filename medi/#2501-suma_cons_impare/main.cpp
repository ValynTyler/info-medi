/*
Cerința
Se citește un număr natural impar n. Să se afișeze valoarea sumei 1+3+5+7+...n.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran valoarea cerută.

Restricții și precizări
n are cel mult opt cifre
Exemplu:
Intrare

5
Ieșire

9
Explicație
1+3+5=9.


///


prog aritmetica:
S = ((a1 + an) * n) / 2

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n; // impar

    cin >> n;
    
    cout << ((1 + n) * (n/2 + 1)) / 2;


    return 0;
}
