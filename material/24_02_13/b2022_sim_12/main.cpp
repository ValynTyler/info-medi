/**
SI:
1) d

2) b  - subprogramul ne arata cate valori sunt egale cu pozitia pe care se gasesc

3  c

4) a

5) c

SII:
1) Citește n, x apoi un șir de numere.
Din fiecare număr taie cât timp paritatea sa e diferită de x.
Dacă după tăiere rămâne o valoare egală cu x, o numără.

   a) 3

   b) 2237, 2257  (merge orice număr de forma 22xy unde x y cifre impare)

   c)


   d)
citește n,x (numere naturale nenule)
nr<-0
┌pentru i <- 1, n executa
│ citește y (număr natural)
│┌cât timp y≠0 și y%2≠x%2 execută
││ y<-[y/10]
│└■
│┌dacă y=x atunci nr<-nr+1
│└■
└■
scrie nr

2) 3 1 4 (nodul 6 de asemenea ar fi fost un răspuns corect, doar că se ce numai 3)

3) fiind numerotate de la 0, liniile sunt 0,1,2
   iar coloanele 0,1,2...14
   ok=0;
   for (j=1; j<14; j++)
    if (a[0][j]==a[1][j-1] && a[0][j]==a[1][j+1]&& a[0][j]==a[2][j])
      ok=1;
*/
#include <iostream>
using namespace std;

int main()
{
    int n, x, nr=0, i=1;
    cin>>n>>x;
    while (i<=n)
    {
        int y;
        cin>>y;
        while(y && y%2!=x%2)
            y/=10;
        if (y==x)
            nr++;
        i++;
    }
    cout<<nr;
    return 0;
}
