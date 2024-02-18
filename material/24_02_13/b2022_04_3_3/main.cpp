/**
  Menținem în două variabile (cif și x) ultimele două valori citite la pasul
curent (inițial cif=0, aleasă convenabil, dat fiind că numerele din fișier
încep de la 1). Menținem într-un contor lungimea secvenței actuale și în momentul
in care cele 2 difera, algoritmul reseteaza acea lungime, dacă nu o incrementează.
  După fiecare incrementare verifica daca lungimea secventei actuale este
egala cu valoarea din care secventa este alcătuită, în acest caz adaugand numarul
de valori la lungimea secventei progresive actuale, apoi comparand lungimea acesteia
cu cea mai mare lungime inregistrata

  Algoritmul este eficient din punct de vedere al memoriei utilizate deoarece utilizează
doar variabile simple (nu utilizează tablouri sau alte date structurate) cantitatea
de memorie fiind infimă ().

  Algoritmul este eficient din punct de vedere al timpului de executare deoarece
parcurge doar odata numerele din fisier, ordinul de complexitate fiind
O(n), unde n înseamnă numărul de elemente memorate in fisier.

*/
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main() {
    int x,cif=0,cnt=0,prog=0,prog_max=0;
    ///cnt=lungimea secvenței curente formată doar din numere egale
    ///prog=lungimea secvenței progresive curente
    ///prog_max=lungimea secvenței progresive maximale
    while(fin>>x)
        if (x != cif) {
            if (cnt != cif)
                prog = 0;
            cif = x;
            cnt = 1;
        }
        else
        {
            cnt++;
            if (cnt == cif) {
                prog += cif;
                if (prog > prog_max)
                    prog_max = prog;
            }
        }
    cout << prog_max;
    return 0;
}
