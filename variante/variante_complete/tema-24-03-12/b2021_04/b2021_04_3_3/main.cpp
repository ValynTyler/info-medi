#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int ap[100];

int inv(int n) {
    return (n % 10) * 10 + n / 10;
}

int main() {
    int na, nb;
    fin >> na >> nb;

    int s = 0;

    for (int i = 0; i < na; i++) {
        int x;
        fin >> x;
        x = x % 100;
        ap[x]++;

    }

    for (int i = 0; i < nb; i++) {
        int y;
        fin >> y;
        y = y % 100;

        if (true /* y > 10 */) {
            s += ap[y];
        }
        if (/*inv(y) > 10 && */ inv(y) != y) {
            s += ap[inv(y)];
        }
    }

    cout << s;

    return 0;
}

/*
    Algoritmul functioneaza datorita proprietatii ca
importante sunt doar ultimele doua cifre ale numarului,
iar suma frecventelor acestora in primul sir inmultite
cu frecventele din cel de-al doilea, cat si inversele
lor (exceptie fac sufixele palindrom so cele > 10) da
numarul de perechi formabile. Programul astfel salveaza
frecventa tuturor sufixelor din primul sir, iar la
parcurgerea celui de-al doilea insumeaza aparitiile din
primul fisier, conditionate de cele 2 criterii.

    Programul este eficient din punct de vedere al
timpului de executie deoarece face doar numarul strict
necesar de pasi pentru a citi toate valorile din fisier,
astfel gradul de complexitate exte O(n), unde n reprezinta
numarul de valori (na + nb) din fisier.

*/
