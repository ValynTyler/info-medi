/**
Subiectul I

1. c

2. a

Soluțiile sunt:
2
22
222
228
229
28
282
288
29
8

3. c (restul au câte-o eroare sintactică)

4. d

(aici ne ajută să recunoaștem algoritmul foarte neeficient de calcul cmmdc
 și anume prin scăderi repetate, care este implementat recursiv)

5. b

(oricum am împărți nodurile, fiecare componentă conexă are cu 1 mai puține muchii decât câte
 noduri are.
Dacă avem 5 componente conexe cu x,y,z,t,w noduri, numărul total de muchii din ele
va fi x-1+y-1+z-1+t-1+w-1 = x+y+z+t+w-5
Știm că în total avem x+y+z+t+w=40 de noduri => 35 de muchii

Subiectul II
1. Formează un număr progresiv, plecând de la 0, astfel:
   - ia cifrele numărului dat, de la coadă spre față. Dacă cifra curentă este
   strct mai mare decât cea din fața ei, o adaugă la coadă. Dacă nu, o adaugă în față:

a) Răspuns: 2197553

   35210579    pleacă de la 0.
    9>7 => 9 e adăugat în dreapta => 9
    7>5 => 7 e adăugat în dreapta => 97
    5>0 => 5 e adăugat la dreapta => 975
    0 NU se ia
    1<2 => 1 e adăugat la stânga => 1975
    2<5 => 2 e adăugat la stânga => 21975
    5>3 => 5 e adăugat la dreapta => 219755
    3>0 => 3 e adăugat la dreapta => 2197553

b) Posibile răspunsuri: 2012, 2201, 2210
     Ca să ne ușurăm o țâră viața, ne dăm seama că prima cifră a numărului original
aterizează întotdeauna pe ultima poziție (pt. că are în fața ei 0)
  Deci dintre cele două cifre de 2 din numărul care trebuie să iasă, ulitmul 2 apare
pe prima poziție în numărul original.
 Ca să lucrăm sistematic, începem cu 2 și luăm toate permutările de 3 și vedem care merge:
2012 -> 212
2021 -> 122 NU
2102 -> 122 NU
2120 -> 122 NU
2201 -> 212
2210 -> 212

c) mai jos


d)

citește x (număr natural)
p <- 1; y <- 0
c <- x%10; x <- [x/10]            obs: merge și dacă NU mai copiem miezul repetitivei în față
┌dacă c≠0 atunci
│┌dacă x%10<c atunci y <- y*10+c
││altfel y <- c*p+y
│└■
│ p <- p*10
└■
┌cât timp x!=0 execută
│ c <- x%10; x <- [x/10]
│┌dacă c≠0 atunci
││┌dacă x%10<c atunci y <- y*10+c
│││altfel y <- c*p+y
││└■
││ p <- p*10
│└■
└■
scrie y

2. Posibil răspuns pentru lanț neelementar:
    (2,6,3,6,3,6,1)
    (2,6,3,5,6,1)
    (2,6,2,6)
   Iată toate ciclurile elementare din acest graf:
    (1,2,6,1)
    (6,3,5,6)
    (4,5,6,2,4)
    (1,2,4,5,6,1)
    (3,5,4,2,6,3)
    (1,2,4,5,3,6,1) - care este de fapt Hamiltonian (elementar prin toate nodurile)

3. ELEMENT

 i  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
s[i]| E | L | I | T | I | S | T |

 i  | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
s[i]| E | L | E | M | E | N | T |


strcpy(s,"ELITIST");
for(i=2;i<6;i++)
if(i%2==0) s[i]=s[0];
else s[i]=s[1]+i/2;

i=2: s[2]=s[0]
i=3: s[3]=s[1]+3/2=s[1]+1
i=4: s[4]=s[0]
i=5: s[5]=s[1]+5/2=s[1]+2

*/
#include <iostream>
using namespace std;

int main()
{
    int x,p=1,y=0,c;
    cin>>x;
    do
    {
        c=x%10;x/=10;
        if(c)
        {
            if(x%10<c)
                y=y*10+c;
            else
                y=c*p+y;
            p*=10;
        }
    }while(x!=0);
    cout<<y;
    return 0;
}
