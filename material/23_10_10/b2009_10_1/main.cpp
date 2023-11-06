/**
 1. a
 (atenție 9/4=4)

 2. Citește două numere n și k.
 Ia cifrele lui  n de la dreapta la stânga și dacă dă de o cifră impară formează
un număr tot de la dreapta la stânga cu cifra din fața ei.
  Dacă pe parcurs întâlnește k cifre pare, se oprește din formare

Răspunsuri:
a) 24

b) posibile soluții
   23345 3
   23347 4
   233456 4

c)
citeşte n,k (numere naturale nenule)
nr <- 0
p <- 1
┌dacă n≠0 şi k≠0 atunci  ///dacă-ul acesta este redundant
│┌execută
││┌dacă n%2≠0 atunci
│││ nr <- nr + [n/10]%10*p
│││ p <- p*10
│││altfel
│││ k <- k-1
││└■
││ n <- [n/10]
│└cât timp n≠0 şi k≠0    ///pentru puritani: repetă...până când n==0 sau k==0
└■                                  sau     repetă...până când not(n≠0 şi k≠0)
scrie nr
*/
#include <iostream>

using namespace std;

int main()
{
    int n,k,nr,p;
    nr=0;p=1;
    cin>>n>>k;
    while(n&&k)
    {
        if(n%2)
        {
            nr=nr+n/10%10*p;
            p*=10;
        }
        else
            k--;
        n/=10;
    }
    cout<<nr;
    return 0;
}
