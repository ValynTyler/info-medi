/**
Subiectul I

1. c  (restul poate fi cuprins între 0 și împărțitor-1

2. d

Cea mai rezonabilă rezolvare pe exercițiul de față:
 - ne dăm seama că f1(n) = n*(n+1)/2 este chiar formula, funcționează pt. orice caz
 - că f2(n) = reducerea recursivă (f2(n) = n+f2(n-1) adică suma Gauss până la n se poate
                    scrie recursiv ca n + suma Gauss(n-1)
 - f3(n) - în calculăm manual pt. f3(24):

    f3(24) = 24*24/4 + 2*f3(12) = 144 + 2*f3(12) = 144 + 2*78 = 144 + 156 = 300
    f3(12) = 12*12/4 + 2*f3(6) = 36 + 2*f3(6) = 36 + 2*21 = 36 + 42 = 78
    f3(6) = 6*6/4+ 2*f3(3) = 9 + 2*f3(3) = 9 + 2*6 = 21
    f3(3) = 3 + f3(2) = 3+3 = 6
    f3(2) = 2*2/4 + 2*f3(1) = 1+ 2*f3(1) = 1+2*1 = 3
    f3(1) = 1 + f3(0) = 1
    f3(0) = 0

pe de altă parte suma gauss 1+2+..+24 = 24*25/2 = 12*25 = 300

Dacă aveți nevoie de validarea matematică a acestui program recursiv, trebuie să găsim
o modalitate de reducere a sumei Gauss, dacă n este par, în funcție de n/2.

Această reducere se face astfel:
  să zicem că avem suma gauss 1+2+3+...+n  unde n este par

O putem separa în 2:
   1+2+..+n/2 + n/2+1 + n/2+2 + n/2+3 ... + n/2+n/2
(gen: pt. n=8 suma 1+2+3+4+5+6+7+8 = 1+2+3+4+(4+1)+(4+2)+(4+3)+(4+4))

   din a doua parte constatăm că regăsim încă o dată suma
gauss 1+2+..n/2 plus de n/2 ori valoarea n/2
  DECI, dacă n este par, suma este 2*(1+2+..+n/2) + n/2*n/2 = n*n/4 + 2*gauss(n/2)

3. a

Folosim modelul aranjamentelor (de ce? pt. că avem 4 din 6 și contează ordinea)
{1=broccoli, 2=cașcaval, 3=conopidă, 4=ou, 5=pătrunjel, 6=smântână}.
Traducem regulile:
 - 1 și 3 se exclud reciproc. Dacă apare unul dintre ele, tre' să fie pe prima poz.
 - dacă apare 5 e musai ultimul
 - dacă apar simulan 6 și 2, 6 trebuie să fie înainte de 2 (oricât de înainte)
Plecăm de la ultima soluție dată de ei (a 5-a) și mai generăm încă 2;
 (1,6,2,4)
 următoarele 2 corecte sunt:
 (1,6,2,5) - validă
 (1,6,2,6) - se repetă 6
 (1,6,3    - nu avem voie 1 și 3
 (1,6,4,2) - validă și reprezintă răspunsul a)

4. b

Acest tip de exercițiu se poate rezolva fără desen. Frunză = nod fără fii.
Neavând fii NU este tată la nimeni => nu apare în vectorul de tați.
Deci putem identifica frunzele ca la "sudoku" - vedem ce numere cuprinse între
1 și nr. de noduri NU apar în vectorul de tați.
 În cazul nostru nu apar numerele 1, 2, 3, 8 și 10 deci are 5 frunze

5. b

Un graf este Eulerian dacă, abstracție făcând de nodurile izolate, este conex iar
gradul fiecărui nod al său este par.
  În cazul grafului nostru, piața care este legată de toate celelalte 4 are deja gradul 4
  Celelalte patru au gradul 1. Unim două câte 2 prin 2 muchii cele 4 piețe, astfel ele
au gradul 2 și graful este Eulerian
 (De ținut minte graful care arată ca un papion - este un graf Eulerian dar NU și Hamiltonian)

Subiectul II

1. Se citește n, apoi în continuare se citesc n numere.
   Din fiecare număr se taie ultima cifră cât timp aceasta este mai mică sau egală cu
   cea de dinainte.
   Face apoi suma tuturor.

a) Răspuns: 2024

   Astfel:
     721 -> 72 -> 7
     20020 -> 2002
     1321 -> 132 -> 13
     211 -> 21 -> 2
  Suma lor 7+2002+13+2 = 2024

b) Posibile soluții:
      10 100
      100 10
      10 1000
      11 1100

  Ca să afișeze "egal" trebuie ca suma reducerilor celor 2 numere butonate să fie egală cu 2.
  Dat fiind că numerele pe care le citim sunt între 10 și 10000, înseamnă că fiecare trebuie
  să se reducă la 1.

c) mai jos

d) transformarea se bazează pe faptul că while-ul din algoritmul dat
avea doar rolul de a efecuta n pași (era neesențial că i-ul scade)
- îl transformăm deci într-un for normal, cresctător

citește n (număr natural nenul)
m <- 0
┌pentru i <- 1,n execută
│ citește x (număr natural)
│┌cât timp x%10 ≤ [x/10]%10 execută
││ x <- [x/10]
│└■
│ m <- m+x
└■
┌dacă m≠n atunci scrie m
│altfel scrie „egal”
└■

2.
   struct telefon
            {
               char producator;
               double dimensiune[3];
               int frecventa;
            } t;

3.
   for(i=0;i<=23;i++)
      if(a[0][i]==2024 && a[3][i]==2024)
        cout<<i<<" ";
*/
#include <iostream>
using namespace std;

int main()
{
    int n,m=0,i,x;
    cin>>n;
    i=n;
    while(i>=1)
    {
        cin>>x;
        while(x%10<=x/10%10)
            x/=10;
        m+=x;
        i--;
    }
    if(m!=n)
        cout<<m;
    else
        cout<<"Egal";
    return 0;
}
