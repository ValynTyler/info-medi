/**
1. d

(băbește, luăm contraexemple:
 a,b sunt adevărate pt. x=1 și y=1, care sunt naturale dar nu respectă condiția
 c este adevărat pt. x=1 și y=5, acesta din urmă nerespcetând condiția de a fi STRICT >5

rămâne d-ul.

Metoda riguroasă:
!(x*(y-5)<=0) <=> x*(y-5)>0
 deci un produs de kestii este pozitiv:
deci avem 2 cazuri:
I) x<0              caz exclus prin condițiile inițiale
   y-5<0 <=> y<5            (nr. naturale)

II) x>0
    y-5>0 <=> y>5  exact ce ne trebuie )

2. Citește un număr și formează altul doar cu cifrele distincte ale celui dat, în ordine
strict descrescătoare.

Răspunsuri:
a) 9432

b) Posibile răspunsuri:
   9654
   4569
   96654

c)
citeşte n (număr natural nenul)
nr <- 0
a <- 9
┌dacă a>=0 atunci   ///acest dacă este redundant, dar nu greșit
│┌execută
││ m <- n
││┌cât timp m≠0 şi m%10≠a execută
│││ m <- [m/10]
││└■
││┌dacă m≠0 atunci
│││ nr <- nr*10+m%10
││└■
││ a <- a-1
│└cât timp a>=0
└■
scrie nr

*/
#include <iostream>
using namespace std;

int main()
{
    int n,nr=0,a,m;
    cin>>n;
    for(a=9;a>=0;a--)
    {
        m=n;
        while(m && m%10!=a)
            m/=10;
        if(m)
            nr=nr*10+m%10;
    }
    cout<<nr;
    return 0;
}
