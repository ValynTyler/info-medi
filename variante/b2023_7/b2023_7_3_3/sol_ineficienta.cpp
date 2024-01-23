#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int m, n;
int a[1000000], b[1000000];

void citire() {
    fin >> m >> n;
    for (int i = 0; i < m; i++) {
        fin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        fin >> b[j];
    }
}

int main() {
    
    citire();

    int nr_perechi = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                nr_perechi++;
                i++;
            }
        }
    }

    cout << nr_perechi;

    return 0;
}

/*
Literatură:
----------

Conform cerintei, alg. pregateste fis. "date.in" pentru citire,
apoi initializeaza variabilele m si n definite pe un interval
memorabil de catre tipul de date int, apoi doi vectori a si b
de dimensiunea ceruta.

Algoritmul utilizeaza o functie de citire

*/
