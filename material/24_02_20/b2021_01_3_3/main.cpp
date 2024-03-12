/**
 Algoritmul parcurge sirul reținând ultimele 2 elemente la fiecare pas,
verificand daca ultimele 3 cifre ale elementului curent si al celui anterior sunt egale
cu numarul dat de problema, daca da, le salveaza pe ambele în 2 variabile s1 si s2.
  La final algoritmul verifica daca exista valori in ambele variabile (le-am inițizalizat
cu 0, care e valoare excepție în acest scop) urmand sa le afiseze, iar daca nu
afiseaza mesajul "Nu exista".

  Algoritmul este eficient d.p.d.v al spatiului utilizat deoarece se foloseshte doar
de variabile simple (în cazul nostru 5 - nu se foloseste de structuri complexe de
date (tablouri sau alte structuri)).

   Algoritmul este eficient d.p.d.v al timpului de executare deoarece parcurge o singura
data datele de intrare, Ordinul de complexitate fiind O(n), unde n reprezinta
numarul de date ale fisierului.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("bac.txt");
	int a=0, b, x, s1=0, s2=0;
	fin >> x;
	while (fin >> b)  ///a=anteriorul, b=curentul
	{
		if (a % 1000 == x && b % 1000 == x)
		{
			s1 = a;
			s2 = b;
		}
		a = b;
	}
	if (s1 == 0 || s2 == 0) cout << "Nu exista";
	else cout << s1 << ' ' << s2;
	return 0;
}
