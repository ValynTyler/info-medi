/**
  Pentru o anumită valoare dată (de ex. 1) observăm că numărul de perechi posibil de format
cu acea valoare este dat de minimul dintre numărul său de apariții în vectorul de sus respectiv
în vectorul de jos.
  Astfel, folosim doi vectori caracteristici (de numărare) în care numărăm de câte ori apare
fiecare valoare în vectorul de sus respectiv de jos. Pe baza acestora, determinăm rezultatul
cerut (suma minimelor aparițiilor fiecăeri valori posibile).

  Algoritmul este eficient d.p.d.v. al timpului de executare deoarece face puțini pași
pentru că datele de intrare sunt parcurse o singură dată, după care se mai face un
număr constant de 101 pași pentru determinarea rezultatului. Ordinul de complexitate al
algoritmul este O(n+m), fiind liniar.
*/
#include <iostream>
#include <fstream>
using namespace std;

int nra[101], nrb[101];///fiind declarate globale, se inițializează implicit cu 0

int main()
{
	int m, n, x;
	ifstream fin("date.in");
	fin >> n >> m;
	for (int i = 1; i <= n; i++)
		fin >> x, nra[x]++;
	for (int i = 1; i <= m; i++)
		fin >> x, nrb[x]++;
	int p = 0;
	for (int i = 0; i <= 100; i++)
		if (nra[i] > nrb[i])p += nrb[i];
		else p += nra[i];
	cout << p;
	return 0;
}
