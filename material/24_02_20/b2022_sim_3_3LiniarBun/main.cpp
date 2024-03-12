/**
 Trebuie să determinăm puterea la care apare 45 în n!.
 Dat fiind că n este foarte mare și că deja pt. n=30 n! nu mai încape
nici măcar pe long long, ne trebuie o soluție algebrică.
  Deci, să determinăm la ce putere apare 45 în:
  1*2*3*4*5*6*7*8*9*10.....*n

45 la rândul său este 45=3^2 * 5.
  Daci ne-ar fi util să determinăm puterea factorilor 3 și 5 în ÎNTREG
factorialul lui n.
  Odată ce-am aflat aceste puteri, fie ele p3 și p5, rezultatul este
dat de min(p3/2,p5).

  Ca să aflăm puterea la care apare factorul 3 și factorul 5 în tot
factorialul ăla, luăm fiecare termen (1,2,3,4,...n) și facem ca la descompunerea
în factori primi: când numărul curent se-mparte la 3 sau la 5, îl împărțim și
vedem de câte ori se împarte (avem grijă să NU distrugem variabila for-ului)
și însumăm puterile.

Ex:
n=52
numărul total de factori 3:
3 -> 1
6 -> 1
9 -> 2
12 -> 1
15 -> 1
18 -> 2
21 -> 1
24 -> 1
27 -> 3
30 -> 1
33 -> 1
36 -> 2
39 -> 1
42 -> 1
45 -> 2
48 -> 1
52 -> 1 TOTAL:23 - deci putem forma 23/2 = 11 de 9
numărul total de factori 5:
5 -> 1
10 -> 1
15 -> 1
20 -> 1
25 -> 2
30 -> 1
35 -> 1
40 -> 1
45 -> 1
50 -> 2 TOTAL: 12

DECI avem mai mulți de 5 decât de 9, răspunsul pe acest caz va fi 11.


   Algoritmul este eficient din punct de vedere al timpului de
executare deoarece parcurge numarul minim de pasi necesari pentru a
rezolva cerinta, mai exact face n pasi pentru parcugerea factorialului
și pentru fiecare număr mai face un număr care depinde logaritmic de acel număr.
Totuși, dat fiind că numerele sunt cel mult 10^9, numărul maxim de pași care se
face pentru un număr poate fi majorat la 18, dat fiind că 3^19 depășește 10^9.
Ordunul de complexitate al programului este astfel O(n) (am considerat deci constant
timpul în care numărăm puterea factorilor - putem considera timpul constant deoarece
la marea majoritate a numerelor va intra de un număr mult mai mic de ori decât 18 sau 19)

  Programul este eficient din punct de vedere al memoriei utilizate deoarece indeplineste
cerinta succint, fara a utiliza structuri de date mai complexe decat un `int` (precum
vectori, matrice sau stiva recursiva). Putem spune astfel ca memoria totala ocupata
de catre structurile de date ale programului este in numar de 5 int-uri adica 4*5 - 20 de
octeti sau ~0.02 kilobytes.
*/

#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main() {
    int n,p3=0,p5=0,x,nrimp=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        x =i;
        while(x % 3 == 0) {
            x /= 3;
            p3++;nrimp++;

        }
        while(x % 5 == 0) {
            x /= 5;
            p5++;
        }
    }
    if(p3/2<p5)
        fout << p3/2;
    else
        fout<<p5;
    return 0;
}

