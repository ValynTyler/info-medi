/**
    Algortimul proiectat indeplineste cerinta prin parcurgerea setului de date de intrare
si simulatana retinere a maximului global inregistrat in variabila `max` (ea fiind actualizata
consecvent) si utilizarea acestuia pentru a determina valoarea de adevar a proprietatii de varf
pentru fiecare valoare citita, fiind necesara de asemenea menținerea unui flag pe valoarea
1 cât timp valorile curente au potențialul de a fi vârfuri locale (gen fac parte din
primul platou de valori egale cu maximul). Mai precis, la găsirea unui maxim stict mai mare,
acest flag devine 1.
  La întâlnirea unei valori strict mai mici ca maximul curent, flag-ul devine 0.
   În rest, dacă valoarea curentă este egală cu maximul iar flag-ul este 1,
atunci ea trebuie afișată (pt. că este un vârf local)

    Algoritmul este eficient din punct de vedere al timpului de executare deoarece
parcurge minimul necesar de pasi pentru a citi intregul set de valori de intrare
(gen parcurge datele de intrare o singură dată)
  Ordinul determinat de complexitate este astfel o(n), unde n reprezinta numarul de valori
dispuse in `bac.in`, algoritmul fiind liniar.

    Algoritmul este eficient din punct de vedere al memoriei utilizate deoarece aloca
strictul necesar de valori tip `int` pentru indeplinirea cerintei, mai exact
se foloseste, pe parcusul executarii de 3x4 = 12 octeti, o cantitate infima de memorie.
(folosim doar câteva variabile simple)
*/
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main() {
    int max = -1,valid=0,crt;
    while (fin >> crt)
        if (crt > max || (crt == max && valid)) {
            cout << crt << " ";
            valid=1;
            max=crt;
        }
        else
        if (crt < max)
            valid=0;
    return 0;
}
