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

  De data asta, pentru a număra putere totală a unui factor în factorial,
procedăm tot algebric:

  - în primul rând ne dăm seama că din 3 în 3 apare câte un facotor 3 (DĂĂĂĂ)
     deci o numărare superficială ne socotește n/3 factori de 3
  - dat fiind că numărarea de mai sus a fost superficială - deci n-a numărat
    decât o parte din factorii 3, vedem care au  mai rămas.
    Păi, într-o primă fază, a mai rămas încă un factor 3 nenumărat din 9 în 9
          deci numărul lor este n/9
  - analog, a mai rămas încă un 3 nenumărat din 27 în 27:    numărul
         lor este n/27
    etc.

       numărul total de factori 3 este:
          n/3+n/9+n/27+n/81+....  (ne oprim când numitorul - care btw este putere a lui 3 -
                                    devine mai mare ca n,)

    Această sumă se face în timp logarimtic

DECI rezolvarea de față rezolvă toată problema în timp logaritmic - în cel mai rău caz
face vreo 30 de pași.

   Algoritmul este eficient din punct de vedere al timpului de
executare deoarece ordinul de complexitate este logaritmic (am explicat mai sus)
în cel mai rău caz făcând 30 de pași.

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
    int n,p3=0,p5=0,f3=3,f5=5;
    ///f3 și f5 sunt numitorii, adică puteri ale lui 3 și ale lui 5
    cin >> n;
    while(n>=f3){
            p3+= n/f3;
            f3*=3;
        }
    while(n>=f5){
            p5+= n/f5;
            f5*=5;
        }

    if(p3/2<p5)
        fout << p3/2;
    else
        fout<<p5;
    return 0;
}
