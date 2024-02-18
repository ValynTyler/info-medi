#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main() {

    int n; // !?!??!!!
    cin >> n;

    int x = 1;
    int y = 45;

    int p = 0;

    for (int i = 1; i <= n; i++) {
        x *= i;
        if (x % y == 0) {
            x /= y;
            p++;
        }
    }

    fout << p;
  
    return 0;
}

/*
    Programul citeste de la tastatura numarul dorit si, prin
utilizarea unor variabile si a unei structuri repetitive,
deduce puterea lui 45 care divide exact numarul final.
Programul se foloseste de faptul ca nu este necesara memorarea
numarului final (care NU ar incapea in incio structura de date
convetionala daca n-ul citit este mai mult de 20) si astfel,
poate "distruge" numarul - impartindu-l cu 45 si incrementand
p-ul de fiecare data cand observa ca acesta ii este divizor.
Programul astfel parcurge astfel maxim n pasi, dupa care va fi
aflat numarul p, putere a lui 45 unde 45^p divide nr. final.

    Programul este eficient din punct de vedere al timpului de
executare deoarece parcurge numarul minim de pasi necesari
pentru a indeplini cerinta, mai exact, in cel mai rau caz el
ar facea n pasi. Gradul de complexitate al programului este
astfel O(n).

    Programul este eficient din punct de vedere al memoriei
utilizate deoarece indeplineste cerinta succint, fara a
utiliza structuri de date mai complexe decat un `int` precum
vectori, matrice sau stiva recursiva. Putem spune astfel ca
memoria totala ocupata de catre structurile de date ale
programului este in numar de 5 int-uri adica 4*5 - 20 de
octeti sau ~0.2 kilobytes.
*/
