#include <iostream>
#include <fstream>

using namespace std;

/*
    Algortimul proiectat indeplineste cerinta prin
parcurgerea setului de date de intrare si simulatana
retinere a maximului global inregistrat in variabila
`max` (ea fiind actualizata consecvent) si utilizarea
acestuia pentru a determina valoarea de adevar a
proprietatii de vart pentru fiecare valoare citita,
fiind necesara de asemenea retinerea valorii citite
anterior, cu ajutorul valorii `ant`.

    Algoritmul este eficient din punct de vedere al
timpului de executare deoarece parcurge minimul necesar
de pasi pentru a citi intregul set de valori de intrare.
facand simultan calulele necesare inedplinirii cerintei.
Ordinul determinat de complexitate este astfel o(n), unde
n reprezinta numarul de valori dispuse in `bac.in`.

    Algoritmul este eficient din punct de vedere al
memoriei utilizate deoarece aloca strictul necesar de
valori tip `int` pentru indeplinirea cerintei, mai exact
se foloseste, pe parcusul executarii de 3x4 = 12 octeti,
o cantitate infima de memorie.
*/

ifstream fin("bac.in");

int main() {
    int ant = 0;
    int crt = 0;

    int max = -1;
    
    while (fin >> crt) {
        if (crt > max || (crt == max && max == ant)) {
            cout << crt << " ";
        }

        if (crt >= max) {
            max = crt;
        }

        ant = crt;
    }

    return 0;
}
