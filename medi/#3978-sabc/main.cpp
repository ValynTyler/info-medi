/*

Dacă x și y sunt două numere naturale cu x ≤ y,
atunci notăm cu s(x,y) suma numerelor naturale
cuprinse între x și y. De exemplu, s(3,6) = 3+4+5+6 = 18, iar s(7,7) = 7.

Cerința
Se dau numerele naturale a, b și c, unde a ≤ b ≤ c. Calculați s(a,b), s(b,c) și s(a,c).

Date de intrare
Programul citește de la tastatură numerele naturale a, b și c.

Date de ieșire
Programul va afișa pe ecran, separate prin câte un spațiu, cele trei sume.

Restricții și precizări
1 ≤ a ≤ b ≤ c ≤ 10.000

Exemplu
3 10 20

Iesire
52 165 207

//

Progresie aritmetica:
a1 + r*1 + a1 + r*2 + a1 + r*3 + ... + a1 + r*n

S = [(a1 + an) * n]/2

*/

#include <iostream>

using namespace std;

int s(int x, int y) {
    return ((x + y) * (y - x + 1)) / 2;
}


int main() {

    int a, b, c;
    
    cin >> a >> b >> c;

    cout << s(a, b) << " " << s(b, c) << " " << s(a, c);

    return 0;
}
