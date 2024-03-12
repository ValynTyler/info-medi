#include <iostream>
/**
SI:
1. a

2. d

3. d

4. b

5. c

SII:
1. Generază termenii progresiei geometrice de rație 3: 1,3,9,27,..
Mai precis un număr de |x-y|+1 termeni din această progresie.
  Pentru toți termenii mai mici strict ca min(x,y) afișează 11,
pentru ceilalți 121

a) 1111121121
(ne gândim că x=5,y=8, deci avem de generat 8-5+1=4 termeni, adică
 1 3 9 27. Minimul dintre ăstea de mai sus fiind 5, la primii 2 termeni (1,3) afișează 11
la ăilalți 2 afișează 121.)
b) 6 15

x=10. Cine poate fi y a.î să se afișeze de 3 ori cifra 2?

  I) dacă x este minimul, termenii ceilalți fiind 1 3 9 27, etc.
   primii 3 termeni sunt mai mici ca x, deci pentru ei se afișează 11.
   Pentru ceilalți se afișează 121

 II) dacă x este maximul, ne gândim cum am merge înapoi:
      termenii 10,9,8 trebuie să fie mai mari ca termenii progresiei, ca să afișeze 121
      deci următorii termeni tre' să fie mai mici ca cei ai progresiei.
    Aceștia fiind 1,3,9,27,81,243  ne dăm seama că numerele 10,9,8, pt. a afișa 2,
se potrivesc cel mai devrem cu termenii 9,27,81
  Deci rămân de acoperit încă 2 numere, deci plecăm de la 6

Deci în total ne trebuie 6 termeni. Deci y=15

c) mai jos

d)
citește x,y (numere naturale nenule)
┌dacă x>y atunci x <-> y
└■
nr <- 1
i <- 1
┌cat timp i>=x execută
│ scrie 1
│┌dacă nr≥x atunci
││ scrie 2
│└■
│ nr<-nr*3
│ scrie 1
| i <- i-1
└■


2.
(ciocarlie,scatiu)
(mierla,scatiu)

3.

   fs.a=2020*f.b-2021*f.a;
   fs.b=2021*f.b;

*/
using namespace std;
int x, y, nr=1;

int main()
{
    cin>>x>>y;
    if (x>y)
        x=x+y, y=x-y, x=x-y;
    for (int i=y; i>=x; --i)
    {
        cout<<1;
        if (nr>=x)
            cout<<2;
        nr=nr*3;;
        cout<<1;
    }
    return 0;
}
