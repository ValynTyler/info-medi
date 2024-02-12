/**
    Citim valorile, menținând la fiecare pas ultimele două valori (fără să le memorăm
într-un tablou)
  La fiecare pas verificăm daca elementul anterior este diferit de elementul curent
si daca acesta (cel curent) se afla in intervalul [x,y], caz în care incrementăm
un contor când sunt respectate ambele conditii.

    Algoritmul este eficient d.p.d.v. al timpului de executare deoarece face puțini pași
pentru că datele de intrare sunt parcurse o singură dată.
   Ordinul de complexitate al algoritmul este O(n),unde n reprezinta numarul de date ale
fisierului.

    Algoritmul este eficient d.p.d.v. al spatiului de memorie utilizat deoarece acesta
utilizează doar câteva variabile simple memoria totală ocupată de acestea este de 20 bytes.

*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int cnt = 0, x, y, a, ant=0;
    ifstream fin("bac.txt");
    fin >> x >> y;
    while (fin >> a)
    {
        if (ant != a && a >= x && a <= y)
            cnt++;
        ant = a;
    }
    cout << cnt;
    return 0;
}
