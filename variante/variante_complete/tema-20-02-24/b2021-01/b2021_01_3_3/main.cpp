#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main() {
    int sufix;
    fin >> sufix;

    int crt;
    int ult;

    int outp[2];

    while (fin >> crt) {
        if (
            ult % 1000 == sufix &&
            crt % 1000 == sufix
        ) {
            outp[0] = ult;
            outp[1] = crt;
        }
        
        ult = crt;
    }

    cout << outp[0] << " " << outp[1];
  
    return 0;
}

/*
    Algoritmul functioneaza astfel: citeste
numarul x de pe prima linie a fisierului si
ii inregistreaza valoare in variabila prefix.
Acesta apoi creeaza doua variabile care vor
memora ultima, cat si penultima valoare
citita din fisier. Programul creeaza un
vector de doua elemente pentru a memora mai
usor valorile menite a fi afisate in final.
Programul apoi citeste in continuu valori
pana cand fisierul se termina si, pentru
fiecare dintre aceste valori intreaba daca
valoarea curenta, cat si cea precedenta,
ambele au sufixul `sufix`. In cazul afirmativ,
vectorul `outp` apoi memoreaza valorile ce
au sa fie afisate iar apoi, programul actualizeaza
valoarea memorata ca fiind penultima.

    Algoritmul este eficient din punct de
vedere al timpului de executare deoarece
executa doar strictul necesar de pasi pentru a
citi toate valorile inregistrate in fisierul
de intrare. Programul astfel parcurge, de fiecare
data, doar n pasi, unde n este numarul de numere
gasite in fisier, astfel gradul sau de complexitate
este notat O(n).

    Algoritmul este eficient din punct de
vedere al spatiului ocupat in memorie deoarece
acapareaza doar strictul necesar de octeti pentru
a putea afisa valorile dorite, mai exact se
foloseste doar de 4 structuri de date, anume 3
int-uri si un vector ce retine 2 valori de tip int,
astfel, variabilele programului ocupa doar 5 octeti
sau in jur de 0.2 kilobytes.
*/
