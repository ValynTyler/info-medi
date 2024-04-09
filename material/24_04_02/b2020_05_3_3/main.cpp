/**
  Ne dăm seama că intervalul cerut este dat de minimul numerlor de două cifre minus 1
și maximul lor plus 1.
  Algoritmul parcurge datele de intrare, determinând minimul și maximul numerelor de
2 cifre. Dacă nu există numere de 2 cifre (lucru de care ne putem da seama din valoarea
cu care am inițializat minimul/maximul) afișăm mesajul "nu există".
 În caz contrar soluția este dată de minimul calculat -1 respectiv maximul +1,

 Algoritmul este eficient d.p.d.v al timpului de executare deoarece face putini pasi,
pentru că parcurge o singura data datele de intrare, ordinul de complexitate fiind
astfel O(n), unde n reprezinta numarul de elemente ale fisierului.
  Algoritmul este eficient d.p.d.v al spatiului de memorie utilizat deoarece nu utilizeaza
structuri complexe de date cum ar fi tablourile, acesta determinand solutia utilizand
doar 3 variabile simple.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("bac.txt");
	int x, a=100, b=0;
	while (fin >> x)
	{
		if (x>9&&x<100)///deci dacă x are fix 2 cifre
        {
            if(x<a)a=x;///facem minimul și maximul
            if(x>b)b=x;
        }
	}
	if (b == 0)
		cout << "nu exista";
	else cout << a-1 << ' ' << b+1;
	return 0;
}
