/**
  Folosesc 2 vectori de frecventa, unul în care număr aparițiile tuturor sufixelor
respectiv tuturor prefixelor posibile de 2 cifre ale fiecărei valori cu cel puțin 3 cifre
 Pentru determinarea rezultatului iau toate valorile posibile (de la 10 la 99)
și le număr pe cele pt. care numerele de apariții coincid și sunt nenule

 Algoritmul este eficient d.p.d.v. al timpului de executare deoarece face puțini pași
pentru că parcurge datele de intrare o singură dată după care mai facem un număr constant
de 90 de pași pentru determinarea rezultatului. Ordinul de complexitate este deci O(n)
unde n reprezintă numărul de numere din fișier (cele de pe a doua linie)
*/
#include <iostream>
#include <fstream>
using namespace std;

int p[100], s[100];///fiind declarați global se inițializează implicit cu 0

int main()
{
    ifstream fin("bac.txt");
    int x,cnt=0;
    while (fin >> x)
        if(x>99)
        {
            s[x % 100]++;
            while (x > 99) x/=10;
            p[x]++;
        }
    for (int i = 10; i < 100; i++)
        if (p[i] == s[i] && s[i] != 0)
            cnt++;
    cout << cnt;
    return 0;
}
