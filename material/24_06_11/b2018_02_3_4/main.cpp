/**
	Programul parcurge datele de intrare retinand la fiecare pas ultimele 3 elemente.
  Algoritmul se foloseste de proprietatea ca un astfel de sir are minim 3 elemente,
acesta verificand daca elementele retinute sunt diferite, retinand intre timp lungimea
sirului curent (care este un contor care se incrementează la valori corecte respectiv
se resetează la valori care nu convin). Maximul acestui contor reprezintă soluția
problemei.

  Alg. este eficient d.p.d.v. al timpului de executare deoarece face puțini pași pentru
că parcurge datele de intrare o singură dată.
  Alg. este eficient d.p.d.v. al memoriei deoarece utilizăm doar câteva variabile simple
(nu utilizăm tablouri sau alte date structurate) memoria totală ocupată de variabilele
programului fiind de 20 byte.
*/
#include <iostream>
#include <fstream>

using namespace std;

int x, y, z, l=2, lmax;

int main()
{
	ifstream fin("bac.txt");
	fin>>x>>y;
	while (fin >> z)
	{
		if (x != y && x != z && y != z)
		{
			l++;
			if (l > lmax)lmax = l;
		}
		else l = 2;
		x = y;
		y = z;
	}
	cout << lmax;
	return 0;
}
