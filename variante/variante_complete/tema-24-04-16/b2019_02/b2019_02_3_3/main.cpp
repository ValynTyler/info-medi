#include <iostream>
#include <fstream>

using namespace std;

/*
    Algoritmul indeplineste cerinta proiectata cu ajutorul unui vector
caracteristic de frecventa. El citeste toate valorile din fisierul de
intrare, inregistrand de fiecare data in vector aparitia valorii citite.
Programul apoi parcurge valorile salvate in vector pentru a afisa
corespunzator cerintei numerele inregistrate.

    Algoritmul este eficient din punct de vedere al timpului de executare
deoarece reuseste sa faca afisarea dorita in numarul minim de pasi
necesari citiri fisierului de intrare si afisarii subsecvente a valorilor
in ordinea dorita. Algoritmul face un numar liniar de pasi pentru a epuiza
valorile de intrare, inregistrandu-le pe parcurs intr-un vector de
frecventa, apoi parcurge acelasi numar de pasi pentru afisarea valorilor
citite in ordinea dorita. Ordinul de complexitate al programului este
astfel O(2n), unde n denota numarul de valori de intrare din `bac.txt`.

*/

ifstream fin("bac.txt");

int ap[1001];

int main() {
    int x = 0;
    while (fin >> x) {
        ap[x]++;
    }

    for (int i = 1; i < 1000; i += 2) {
        for (int k = 0; k < ap[i]; k++) {
            cout << i << " ";
        }
    }

    for (int i = 0; i < 1001; i += 2) {
        for (int k = 0; k < ap[i]; k++) {
            cout << i << " ";
        }
    }

    return 0;
}
