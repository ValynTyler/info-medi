/**
I
1)d

2)c

a:
f(120234,3)=f(12023,2)
f(12023,2)=f(1202,1)
f(1202,1)=f(120,0)
f(120,0)=1200+2

3)a

4)c

5)b

  Nodul 1 e rădăcină - e musai (nefiind frunză) să aibă 2 fii.
DECI, deja arborele nostru are 3 noduri. Deci mai tre' să-i punem încă 4.
   Pentru ca 7 să aibă un număr MAXIM de frați, toate cele 4 noduri le punem
ca fii ale aceluiași nod, și totodată ca fiind frunze.
  Fiind deci 4 fii, nodul care le este tată nu poat fi altul decât 3.
    Și deci putem lua orice configurație în care
    - 1 are 2 fii, printre care 3 și orice alt nod în afară de 7
    - nodul 3 are ca fii nodul 7 și cele rămase

=> 7 are 3 frați (și anume ceilalți 3 fii ai nodului 3)

II

1)
a) ia toate numerele care se pot forma cu 2 cifre vecine din n, de la dreapta la
stânga și le afișează DOAR pe cele care sunt prime.

n:1237518 123751 12375 1237 123 12
x:18 51 75 37 23
p:0 0 0
scrie:37 23

b) 131 237

c) mai jos

d)

citeşte n (număr natural)
x<-n%100                            dacă stăteai să-ți bați capul
┌dacă x>1 atunci                   (pierzând timp prețios) puteam constata că
│ p<-(x%2)*(x%3)*(x%5)*(x%7)       merge și dacă NU mai dăm copy+paste în față
│┌dacă p!=0 atunci                  la miezul repetitivei
││ scrie x,’ ’
│└■
└■
 n<-[n/10]
┌cat timp n>=10 execută
│ x<-n%100
│┌dacă x>1 atunci
││ p<-(x%2)*(x%3)*(x%5)*(x%7)
││┌dacă p!=0 atunci
│││ scrie x,’ ’
││└■
│└■
│ n<-[n/10]
└■

2)

[1,2], [1,3], [1,5], [2,3], [2,5], [3,5]

3)

s=0;
for(int i=0; i<15; i++)
    s=s+t[i].pret*t[i].nrLocuri;

*/
#include <iostream>
using namespace std;

int main()
{
	int n, x, p;
	cin >> n;
	do {
		x = n % 100;
		if (x > 1)
		{
			p = (x % 2) * (x % 3) * (x % 5) * (x * 7);
			if (p) cout << x << ' ';
		}
		n /= 10;
	} while (n >= 10);
	return 0;
}
