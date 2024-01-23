#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int m, n;
int a[1000000];

int main() {

    int nr_perechi = 0;
    
    fin >> m >> n;

    for (int i = 0; i < m; i++) {
        fin >> a[i];
    }

    for (int j = 0; j < n; j++) {
        int b;
        fin >> b;
        for (int i = 0; i < m; i++) {
            if (a[i] == b) {
                nr_perechi++;
                fin >> b;
                j++;
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
memorabil de catre tipul de date int, apoi un singur vector a
care memoreaza elem. sirului A.

Algoritmul este eficient din punct de vedere al timpului de
executare deoarece face numarul minim de pasi pentru a determina
perechile (pa, pb) de indici distincti, adica odata ce gaseste o
pereche pentru elementul citit b in sirul memorat a[i], acesta
citeste o valoare noua, (deoarece cea veche a fost deja imperecheata)
si incrementeaza indicele j, semnificand programului ca o valoare
noua a fost citita.

Parcurgand 2 repetitive intercalate cu m, respectiv n pasi, gradul
de complexitate este astfel O(n*m).

*/
