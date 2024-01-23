/**
I.

1.
a = (20*23)/4
b = (10 * 23) / 2 = 230/2 = 115
c = (20*23)/2
d = ((20*23)/2)*2

R: d)

2.
f(23): f(11) 1
f(11): f(5) 1
f(5): f(2) 1
f(2): f(1) 0
f(1): f(0) 1
f(0): 0


Consolă:
010111

R: c)

3.
s = bac2023
s[s[2]-a] = s[c-a] = s[2] = \0
strlen(s) = 2 => k = 2;

c)

4.
b) - nodurile 4 și 7 au 3 ascendenți și anume nodurile 1,3,2

5.
a) 4

(petru a face o ctc cu număr minim de arce ne asigurăm că avem un circuit)
În cazul de față putem construi acest graf adăugând arcele (3,1) (5,3) (2,4) (4,2)
 - vezi și schița b2023_05_1_5schitza.png

II
1.
a) Pleacă de la ultima cifră a numărului dat spre prima.
Dacă cifra curentă este strict mai mare decât ultima cifră selecționată mi-o păstrează
iar cifra selecționată devine cea păstrată. Dacă nu șterge cifra curentă.

R: 9752

b)
  R: 321, 961  (orice două valori cu cifre în ordine STRICT descresctăroare)

c)
(mai jos)

d)
citeşte x (număr natural)
 p <- 1; m <-  -1
┌daca p <= x atunci
│┌repeta
││ c <- [x/p]%10
││┌dacă c>m atunci
│││ m <- c; p <- p*10
│││altfel
│││ x <- [x/(p*10)]*p+x%p
││└■
│└pana cand p>x
└■
┌dacă m≥0 atunci scrie x
│ altfel scrie "nul"
└■

2.

(mare, rau) - {2,5}
---cea dată este {3,4}
(ocean, ploaie, rau)  {3,4,5}

3.

struct sstoc {
    int nrFire,pretFir;
};

struct lalea {
    char denumire[21];
    sstoc stoc;
}f[10];

SAU

struct lalea {
    char denumire[21];
    struct
    {
        int nrFire,pretFir;
    } stoc;
}f[10];

*/
#include <iostream>
using namespace std;


int main()
{
    int x;
    cin >> x;
    int p = 1,m = -1,c;
    while (p <= x)
    {
        c = (x/p) % 10;
        if (c > m)
        {
            m = c;
            p *= 10;
        }
        else
            x = (x/(p*10)) * p + x % p;
    }
    if (m >= 0)
        cout << x;
    else
        cout << "null";
    return 0;
}
