/*
Cerința
Se dau lungimile laturilor unui trapez ABCD cu AB||CD. Aflati aria acestuia.

Date de intrare
Programul citește de la tastatură lungimile laturilor AB, BC, CD, AD.

Date de ieșire
Programul va afișa pe ecran numărul A reprezentand aria trapezului, 
cu 2 zecimale exacte, daca trapezul este valid, altfel se afiseaza mesajul Imposibil.

Restricții și precizări
1 ≤ AB, BC, CD, AD ≤ 1000
Exemplul 1
Intrare

6 4 8 3
Ieșire

20.33
Exemplul 2
Intrare

6 4 15 3
Ieșire

Imposibil
Exemplul 3
Intrare

1000 999 998 997
Ieșire

Imposibil
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    

    int ab, bc, cd, da;
    cin >> ab >> bc >> cd >> da;
    // AB || CD

    float l = (cd - ab)/2;
    float h = sqrt(da*da - l*l);


    cout << h * ((float)ab + cd)/2;


    return 0;
}
