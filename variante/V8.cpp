/**
1. a

(Întrebarea cere care dintre expresiile acelea este fix același lucru cu
    max(a,b) )

2. Formează un număr cu cifrele pare ale celui dat, luate de la dreapta la stânga.
Dacă pe parcursul extragerii cifrelor se întâlnesc mai mult de k cifre impare, se oprește

Răspuns:

a) 22

b) 11111 3
   3 11111
   1351 2
   24135 2
c)

citeşte n,k (numere naturale nenule)
nr <- 0
p <- 1
┌dacă n≠0 şi k≠0 atunci ///acest dacă este redundant
│┌execută
││┌dacă n%2=0 atunci
│││ nr <- nr+ n%10*p
│││ p <- p*10
│││altfel
│││ k <- k-1
││└■
││ n <- [n/10]
│└cât timp n≠0 şi k≠0     ///atenție, dacă am fi folosit "până când" condiția devenea
└■                         /// n=0 sau k=0
scrie nr
*/
#include <iostream>
using namespace std;

int main()
{
    int n,k,nr=0,p=1;
    cin>>n>>k;
    while(n&&k)
    {
        if(n%2==0)
        {
            nr+=n%10*p;
            p*=10;
        }
        else
            k--;
        n/=10;
    }
    cout<<nr;
    return 0;
}
