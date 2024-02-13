#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main() {
    int x;
    int cif = 0;
    int cnt = 0;
    int prog = 0;
    int prog_max = 0;
    while(!fin.eof()) {
        fin >> x;
        if (x != cif) {
            if (cnt != cif) {
                prog = 0;
            }
            cif = x;
            cnt = 1;
        } else {
            cnt++;
            if (cnt == cif) {
                prog += cif;
                if (prog > prog_max) {
                    prog_max = prog;
                }
            }
        }

        // cout << x << " " << cnt << " " << prog << "\n";
    }
    cout << prog_max;

    return 0;
}

/*
Algoritmul se foloseste de faptul ca lista este ordonata crescator si
verifica fiecare cifra citita impotriva unei cifre memorate considerate
cifra actuala. Algoritmul tine cont de lungimea secventei actuale iar
in momentul in care cele 2 difera, algoritmul reseteaza acea lungime.
Algoritmul verifica daca lungimea secventei actuale este egala cu valoarea
din care secventa este alcătuită, în acest caz adaugand numarul de valori
la lungimea secventei actuale, apoi comparand lungimea acesteia cu cea mai
mare lungime inregistrata

Algoritmul este eficient din punct de vedere al memoriei utilizate, cat si
al timpului de executare, deoarece acesta parcurge doar odata cifrele
inregistrate in fisier, fara a le salva definitiv in memorie (nu utilizează
vectori). Astfel, cantitatea de memorie utilizată este optima iar gradul de
complexitate care aproximează timpul de executare este O(n), unde n înseamnă
numărul de elemente memorate in fisier.

*/