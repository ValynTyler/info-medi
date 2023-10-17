/*
Cerința
Scrieți un program care citește de la tastatură 
un număr natural a și care afișează partea întreagă
a valorii expresiei 3⋅(a2+a4)a2+a4+a2+a4√+a2+a4−−−−−−√
.

Date de intrare
Programul citește de la tastatură numărul a.

Date de ieșire
Programul va afișa pe ecran numărul un număr natural, reprezentând rezultatul cerut.

Restricții și precizări
1 ≤ a ≤ 100
Exemplu:
Intrare

2
Ieșire

6
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a;

    cin >> a;

    int zeta = (a*a + a*a*a*a);
    int sq_zeta = sqrt(zeta);

    int alpha = 3*zeta;
    int beta = zeta + sq_zeta;
    int gamma = sq_zeta;



    cout << (alpha/beta) + gamma;


    return 0;
}
