/**
1. c)

2. Citește n și k și face produsul ultimelor k cifre ale lui n
(exprimarea e corectă chiar și dacă k mai mare decât nr. de cifre
ale numărului, pt. că în acest caz considerăm că cifrele inexistente
sunt de fapt egale cu 0 și deci nefiind impare nu influențează rezultatul)

Răspunsuri:

a) 15

b) 98888

c) mai jos

d)
citeşte n,k (numere naturale)
p <- 1
┌pentru i <- 1,k execută  ///facem for-ul să execute k pași
│ c <- n%10
│ ┌dacă c%2=1 atunci     ///vezi obs. de dinainte - chiar dacă k>nr. de cifre ale lui n,
│ │ p <- p*c              ///caz pe care repetitiva de dinainte s-ar fi oprit,
│ └■                      ///în cazul de față chiar dacă se continuă ies cifre egale cu 0
│ n <- [n/10]             ///care nu influențează
└■
scrie p

SAU

citeşte n,k (numere naturale)
p <- 1
┌pentru i <- 1,k execută  ///sau dacă chiar dorim ca atunci când n este 0 să NU mai facă niciun calcul
│ ┌dacă n!=0 atunci
│ │ c <- n%10
│ │ ┌dacă c%2=1 atunci
│ │ │ p <- p*c
│ │ └■
│ │ n <- [n/10]
│ └■
└■
scrie p
*/
#include <iostream>

using namespace std;

int main()
{
    int n,k,p=1,c;
    cin>>n>>k;
    while(n>0&&k>0)
    {
        c=n%10;
        if(c%2==1)
            p*=c;
        n/=10;
        k--;
    }
    cout<<p;
    return 0;
}
