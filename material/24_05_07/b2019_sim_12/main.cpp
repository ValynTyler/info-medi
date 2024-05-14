/**
I

1)d

2)d

3)a

 Apelul inițial se face cu d=1 (pe locul parametrului d valoarea din apel este 1)
După cum vedem în cod, la fiecare d se fac următoarele:
  - dacă d este chiar rădăcina pătrată a lui n se întoarce 1
  - dacă d este divizor, funcția adună 2 în mod recursiv
  - în orice alt caz, funcția doar crește d-ul

Recunoaștem aici algoritmul eficient de numărare a divizorilor unui număr, doar că este
transpus recursiv
(e vorba de acest algoritm:
      nrd=0; ///în variabila asta numărăm divizorii
      for(d=1;d*d<n;d++)
        if(n%d==0)
            nrd+=2;
      if(d*d==n)
            nrd++;)

Deci, în transcrierea recursivă condiția de oprire trebuie să corespundă for-ului de mai sus,
deci va fi if(d*d>n) return 0;

4)b

5)c

Vezi b2019_sim_1_5Schita.png și  b2019_sim_1_5V2Schita.png

Ideea pe care am mers, ca să facem cât mai multe frunze este ca, pe fiecare nivel, UNUI singur nod îi
punem fii, restul rămân frunze.

II

1) Determină cel mai mare număr dintre a și b în care factorul k apare la
puterea minimă nenulă. Dacă nu apare afișează 0.

a) 12

b) 2016, 2019

c) mai jos

d)

citeşte a,b,k (numere naturale, 1≤a≤b, k>1)
 pm<-0; y<-0;
┌pentru i <- b, a, -1 execută
│ x<-i; p<-0
│┌cât timp x%k=0 execută
││ x<-[x/k]; p<-p+1
│└■
│┌dacă p≠0 și (p<pm sau pm=0)atunci
││ pm<-p; y<-i
│└■
└■
 scrie y

 2)
 struct d
	{
		int zi, luna;
	};

 struct eveniment
 {
	int id;
	d data;
 }e;

SAU (varianta mai scurt de scris dar mai nepractică)

 struct eveniment
 {
	int id;
	struct d
	  {
	    int zi,luna;
      } data;
 }e;

 3)
 for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			a[i][j] = 2 * i + j;
*/
#include <iostream>

using namespace std;

int main()
{

	int a, b, k, pm, p, i, x, y;
	cin >> a >> b >> k;
	pm = 0;y = 0;i = b;
	while (i >= a)
	{
		x = i;p = 0;
		while (x % k == 0)
			x /= k, p++;
		if (p!=0 && (p < pm || pm == 0))
			pm = p, y = i;
		i--;
	}
	cout << y;
	return 0;
}
