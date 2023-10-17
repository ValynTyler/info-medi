/*
Cerința
Se dau două numere naturale nenule a și b, unde a≤b. Să se determine câte numere naturale divizibile cu 10 sunt în intervalul [a,b].

Date de intrare
Programul citește de la tastatură numerele a și b.

Date de ieșire
Programul va afișa pe ecran numărul de numere naturale divizibile cu 10 din intervalul [a,b].

Restricții și precizări
1 ≤ a ≤ b ≤ 1.000.000.000
Exemplu:
Intrare

19 90
Ieșire

8
Explicație
Numerele divizibile cu 10 din intervalul [19,90] sunt: 20, 30, 40, 50, 60, 70, 80, 90.

*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int cnt = b/10 - a/10;

    cout << cnt;

    // for (int i = 1; i <= cnt; i++)
    // {
    //     cout << a / 10 * 10 + i * 10 << " ";
    // }
    
    

    return 0;
}
