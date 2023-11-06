/*
Cerinţa
Se dă un număr natural n cu exact trei cifre. Calculaţi pătratul numărului format cu cifra sutelor și cifra unităților.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieşire
Programul afișează pe ecran numărul P, reprezentând valoarea cerută.

Restricţii şi precizări
100 ≤ n ≤ 999
Exemplu:
Intrare

745
Ieșire

5625
*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;


    int rez = (n/100) * 10 + n % 10;
    cout << rez * rez;


    return 0;
}
