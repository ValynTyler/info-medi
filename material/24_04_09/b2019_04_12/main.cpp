/**
I
1)a

2)b

3)b

strchr(string,char) întoarce:
   - NULL dacă NU găsește char în string
   - adresa de memorie a primei apariții ale acelui caracter
     (la cout ne dă de fapt stringul de la prima apariție încolo)

4)b

Ăstea sunt aranjamente, însă generate în ord. descr.
Ne adaptăm:
5420 - încercăm să scădem 1 din ultima cifră - nu se poate - mergem la penultima
541  - până aici e valid, meregem m ai departe și punem cea mai mare cifră posibilă:
5415 - nu e bun
5414 - nu e bun
5413 - e soluția căutată

5)c

Cele 10 muchii le "înghesuim" între kt mai puține noduri, adică 5
(între 5 noduri putem de altfel băga maxim 10 muchii - ceea ce și facem)
 avem deci o componentă conexă cu 5 noduri.
 Restul de 15 noduri izolate (emo) rămân fiecare câte o componentă conexă
 Total: 16 componente conexe.

II
1) Citește m,n,p,q. Ia toate numerele din intervalul p,q și numără:
   - s1 = câte se divid la p sau q
   - s2 = câte se divid la p și q
afișează s1-2*s2

a) 3

b) 25, 26 merg și 30, 31, 32

c)mai jos

d)
citeşte m,n,p,q (numere naturale nenule, p≤q)
 s1<-0; s2<-0
┌pentru li<-p, q execută
│┌dacă li%m=0 sau li%n=0 atunci
││ s1<-s1+1
│└■
│┌dacă li%m=0 şi li%n=0 atunci
││ s2<-s2+1
│└■
└■
 s<-s1-2*s2
 scrie s

 2) (4,1,2,6,5)
    merg și:
    (3,5,1,2,6)
    și
    (2,6,5,1,4)

 3)
 fig.raza=1;
 fig.centru.x=0;
 fig.centru.y=0;
*/
#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q, s, s1=0, s2=0;
    cin >> m >> n >> p >> q;
    while(p <= q)
    {
        if (p % m == 0 || p % n == 0)
            s1++;
        if (p % m == 0 && p % n == 0)
            s2++;
        p++;
    }
    s = s1 - 2 * s2;
    cout << s;
    return 0;
}
