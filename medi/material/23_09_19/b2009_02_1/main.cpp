/**

 1. Răspuns corect: a

(semnificația acestui răspuns:
    (x%y==0) && (y%x==0) && (x*y>0)    - x se divide la y și
                                         y se divide la x și
                                         au același semn

Atenție la conectorul "dacă și numai dacă", ce care semnificația:
dacă enunțul este adevărat atunci răspunsul ales de noi este corect
totodată, dacă răspunsul ales de noi este corect de aici rezultă că și enunțul este adevărat.

Dacă întrebarea era formulată prin
"Variabilele x şi y sunt tip int. Care dintre expresiile C/C++ de mai jos are valoarea 1
dacă valorile întregi nenule memorate în variabilele x şi y sunt egale?"
(adică în loc de "dacă și numai dacă" aveam doar "dacă") atunci erau corecte
 a, c și d.


 2. Vom încerca să descriem în cuvinte ce face (acest lucru NU se cere la bac, dar ajută la
înțelegerea rezolvării):

   Algoritmul citște un șir de numere până la apariția lui 0, care se ia și el în calcule.
Compară elementele vecine și pentru fiecare pereche de numere comparate afișează
ultima cifră de la numărul mai mare.

Răspunsuri:

 a) 2211775

 b) Posibile răspunsuri:
    89 88 87 17 0
    22 39 48 57 0
    19 18 17 7 0
    69 58 47 37 0
    9 8 7 7 0

 c)

citeşte x (număr natural nenul)
┌dacă x>0 atunci
│┌execută
││ citeşte y (număr natural)
││┌dacă x>y atunci
│││ scrie x%10
│││altfel
│││ scrie y%10
││└■
││ x <- y
│└cât timp x>0   ///sau fix același lucru: repetă...până când x<=0
└■

 d) Mai jos
*/
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x;
    while(x>0)
    {
        cin>>y;
        if(x>y)
            cout<<x%10;
        else
            cout<<y%10;
        x=y;
    }
    return 0;
}
