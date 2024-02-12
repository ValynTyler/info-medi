/**
SI:
1.c

2.d

3.a

Folosim modelul de la submulțimi, doar că având 2 sau 3 elemente.
{1=tenis, 2=fotbal, 3=volei, 4=handbal, 5=baschet}
în aceeași soluție n-au voie 2 și 5

Ni se cere ce se generează fix după
{2,4}
în mod normal (la submulțimi) ar fi urmat: {2,4,5} dar cu restricția legată de 2 și 5 NU putem
{2,5} - nici asta nu-i ok din același considerent
{3,4} - ASTA e soluția bună, adik {volei,handbal}

4.b

5.c


SII:
1. Algoritmul citește un număr natural și face suma puterilor de la descompunerea sa
în factori primi

a) 4

(pt. că  56= 2*2*2*7 deci 2^3 * 7 deci puterile sunt 3 și 1 -> se afiseaza 4

b) 11, 13  (deci e bun orice număr prim din intervalul ăla)6

c)

d)
citeşte n (număr natural)
i<-2; k<-0
┌cât timp n≥i execută
│┌daca n%i=0 atunci
││ ┌execută
││ │k<-k+1
││ │n<-[n/i]
││ └pana cand n<i   ///sau cât timp n≥i
│└■
│┌dacă i=2 atunci i<-i+1
││altfel i<-i+2
│└■
└■
scrie k


2. x= 2022/2023/2024/2025

  Doua valori: 2022 si 2025

3. strcpy(id,strchr(s,' ')+1)
   strcat (id,"2022")
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2, k = 0;
    while (n >= i)
    {
        while (n % i == 0)
        {
            k++;
            n /= i;
        }
        if (i == 2)
            i++;
        else
            i += 2;
    }
    cout << k;
    return 0;
}
