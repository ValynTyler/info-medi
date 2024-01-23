/**
I.

1) b

2) c
f(3,2):(x=3,y=2) z=f(3,1)=3  y e par -> întoarce 3*3=9
f(3,1):(x=3,y=1) z=f(3,0)=1  y e impar - întoarce 1*1*3=3
f(3,0)=1

3) a

4) bergamotă, cireș, iris, lămâie, salcâm
ber, ir, lam
ber, ir, sal
ber, lam sal
cir, ir, lam
cir, ir, sal,
cir, lam, sal
ir, lam sal

b)

5) d)

 * Având 5 noduri, gradul maxim posibil este 4 - cade b
 * Suma gradelor este egală cu dublul nr. de muchii - deci tre' să fie pară.
     => cade c-ul
 * Dacă un nod are gradul 0 => acel nod este izolat, deci gradul maxim posibil se
      reduce la 3 => cade a-ul

Rămâne doar d)


II

1) Citește n și apoi n perechi (deci 2*n valori).
  La fiecare pereche formează un număr din primul, păstrând doar prima cifră
și zerorizându-le pe celelalte. Dacă suma dintre acesta și cel de-al doilea NU coincide
cu valoarea inițială a primului număr, perechea se numără (ceea ce e cam același lucru
cu verificarea dacă numărul obținut DOAR prin ștergerea primei cifre de la primul număr
din pereche este egal cu al doilea)

a) 2

n:3 2 1
x:0 1
a:746 74 7  782    3067 306 30 3   3067  78
b:82   67   178
c:746 3067
p:1 10 100  1 10 100 1000

b) 2, 0, 3, 0



c) mai jos

d)
citește n (număr natural nenul)
x <- 0
┌pentru i <- n, 1, -1 execută  ///faptul că for-ul e descrescător n-are nicio relevanță - așa că
│ citește a,b (numere naturale)   ///e mai simplu să-l facem crescător, de la 1 la n
│ c <- a; p <- 1
│┌cât timp a>9 execută
││ a <- [a/10]; p <- p*10
│└■
│ a <- a*p+b
│┌dacă a!=c atunci
││ x <- x+1
│└■
└■
scrie x


2) 2, 3

3)
  if(p.pret<100)
            a=p.denumire[0];
	   else a='*';

*/
#include <iostream>
using namespace std;
int main()
{
	int n, x, c, p, a, b;
	cin >> n;
	x = 0;
	while (n)
	{
		cin >> a >> b;
		c = a; p = 1;
		while (a > 9)a /= 10, p *= 10;
		a = a * p + b;
		if (a != c)x++;
		n--;
	}
	cout << x;
	return 0;
}
