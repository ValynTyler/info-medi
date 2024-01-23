/**
  Datele de intrare (numerele ce reprezintă prețurile) sunt relativ multe dar cu valori
relativ mici. Pentru o rezolvare eficientă putem folosi un vector de frecvență (de numărare)
în care, pentru fiecare valoare posibilă (de la 10 la 1000) se va reține numărul de apariții
a valorii respective.
  Pe baza vectorului de frecență, parcurgându-l în sens descrescator, căutând primele, deci
cele mai mari 3 valori care apar de un număr suficient de ori, determinăm soluția.

  Algoritmul este eficient d.p.d.v. al timpului de executare deoarece face puțini pași
pentru că parcurge datele de intrare o singură dată după care mai facem un număr constant de
maxim 1000 de pași pentru determinarea rezultatului. Ordinul de complexitate este deci O(n)
unde n reprezintă numărul de numere din fișier (cele de pe a doua linie)

*/
#include <iostream>
#include <fstream>
using namespace std;

int  f[1001];///fiind declarat global se inițializează implicit cu 0
int main()
{
	int n1, n2, n3, maxi=0,pr1,pr2,pr3;
	ifstream fin("bac.txt");
	fin >> n1 >> n2 >> n3;
	int x;
	while (fin >> x)
		f[x]++;
    ///determinăm prețurile cărților
    pr1=1000;
    while(pr1>=10 && f[pr1]<n1) pr1--;
    pr2=pr1-1;
    while(pr2>=10 && f[pr2]<n2) pr2--;
    pr3=pr2-1;
    while(pr3>=10 && f[pr3]<n3) pr3--;
    if(pr3<10)
        cout<<"nu exista";
    else
        cout<<pr1<<" "<<pr2<<" "<<pr3;
    return 0;
}
