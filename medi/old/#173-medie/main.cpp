/*
Să se scrie un program care citeşte de la tastatură cele trei note ale unui elev și determină media lor.

Date de intrare
Programul citește de la tastatură trei numere naturale x, y, z, reprezentând notele.

Date de ieşire
Programul afișează pe ecran media calculată, cu exact două zecimale, fără rotunjire.

Restricții și precizări
cele trei numere citite sunt mai mari decât 0 și mai mici sau egale cu 10
media se va afișa cu exact două zecimale, fără rotunjire
Exemplul 1
Date de intrare

9 9 7
Date de ieșire

8.33
Exemplul 2
Date de intrare

9 8 7
Date de ieșire

8.00
*/

#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int rez = (x + y + z) * 100 / 3; 
    cout << rez / 100 << '.' << rez % 100 << " jeff";

    return 0;
}
