#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("bac.in");

int main() {
    int vmax = -1;
    int min_abs = 999999;

    int prv, crt, nxt;
    fin >> prv >> crt >> nxt;
    do {
        if (prv < crt && crt > nxt) {
            int absv = abs(prv - nxt);
            if (absv <= min_abs) {
                min_abs = absv;
                if (crt > vmax) {
                    vmax = crt;
                }
            }
        }

        prv = crt;
        crt = nxt;
    } while (fin >> nxt);

    if (vmax == -1) {
        cout << "nu exista";
    } else {
        cout << vmax;
    }

    return 0;
}

/*
    Algoritmul parcurge toate valorile dispuse in fisier, avand mereu in memorie cate 3 valori. Algoritmul astfel poate afla daca valoarea
din mijloc indeplineste sau nu criteriul de 'varf' iar, in cazul afirmativ decide daca aceasta ar trebui sau nu memorata pentru afisare pe
baza criteriilor discutati de problema. Variabila `vmax` este initializata cu -1, pastrandu-si valoarea doar daca niciun element din fisier
nu indeplineste proprietatea 'varf'. Programul astfel afiseaza mesajul "nu exista" doar daca vmax ramane -1 adica nu intimpina 'varf'-uri
in fisier, si il afiseaza pe cel pertinent in caz contrar.

    Algoritmul este eficient din punct de vedere al timpului de executare deoarece indeplineste cerinta in minimul posibil de pasi,
executand strictul necesar de iteratii pentru a citi toate valorile dispuse in fisier, determinand pentru fiecare daca este sau nu
considerat varf. Programul astfel executa un numar liniar de pasi, mai exact n, unde n este numarul de elemente din `bac.in`.
Acest lucru ii confera algoritmului gradul de complexitate O(n).

    Algoritmul este proiectat eficient din punct de vedere al memoriei utilizate deoarece salveaza strictul necesar de valori pentru
indeplinirea cerintei. Ne fiind nevoit sa foloseasca structuri de date mai complexe precum vectori, matrici, sau stiva recursiva,
algoritmul indeplineste cerinta lucrand doar cu un total de 6 variabile de tip int. Se poate aproxima deci ca memoria alocata pentru
functionarea algoritmului este 4 * 6 octeti sau 24/1024 ~= 0.02 kilobytes. 

*/
