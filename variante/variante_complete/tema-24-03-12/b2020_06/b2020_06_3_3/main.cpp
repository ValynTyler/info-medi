#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

// sirul palindromic poate contine cel mult 1 val. cu
// aparitii impare, caz in care card. sirului trb sa
// fie impar, sau 0 val. cu frecventa impara, caz in
// care card. sirului va fi mereu par.

/*
    Algoritmul fuctioneaza pe baza unui vector caracteristic
care retine frecventa fiecarui termen din sir. Programul
se foloseste de proprietatea ca un sir palindromic trebuie
sa contina DOAR perechi de numere, cu execptia termenului
din mijoloc care, daca numarul de valori din sir este par
va fi dublat asadar fiecare numar va aparea de un numar
par de ori sau, daca numarul de valori este impar, termenul
din mijloc va aparea un numar impar de ori. Astfel programl
afla numarul de frecvente impare din sir, iar daca acesta
trece peste numarul posibil pentru un sir cu trasatura
dorita, acesta va fi considerat nepalindromic.

    Algoritmul este eficient din punct de vedere al timpului
de executare deoarece parcurge strictul necesar de pasi pentru
a citi valorile fisierului, apoi face un numar constant de pasi
pentru a determina propritatea cautata. Astfel, ordinul de
complexitate pentru algoritmul proiectat va fi O(n), unde n
este numarul de valori dispuse in fisier. 
*/

int ap[1001];

int main() {
    int x;
    int card = 0;
    int max_v_imp = 0;
    
    bool palindromic = true;

    while (fin >> x) {
        ap[x]++;
        card++;
    }

    max_v_imp = (card % 2 == 0) ? 0 : 1;

    for (int i = 0; i < 1001; i++) {
        if (ap[i] % 2 == 1) {
            max_v_imp--;
        }
        if (max_v_imp < 0) {
            palindromic = false;
            break;
        }
    }

    cout << (palindromic ? "DA" : "NU");
  
    return 0;
}
