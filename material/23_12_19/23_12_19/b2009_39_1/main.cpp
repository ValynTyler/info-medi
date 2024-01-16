/**
1. b

2. Citește un număr și formează altul prin incrementarea cifrelor cuprinse între
0 și 9 (fără acestea 2)
Răspunsuri:
a) 23949

b) 1008
   1009

c)
citeşte n (număr natural)
nr <- 0
p <- 1
┌dacă n≠0 atunci  ///acest dacă este redundant
│┌execută
││ c  <-  n%10
││┌dacă c>0 şi c < 9 atunci
│││ c <- c+1
││└■
││ nr  <-  nr+c*p
││ p  <-  p*10
││ n  <-  [n/10]
│└cât timp n≠0
└■
scrie nr

d) mai jos
*/
#include <iostream>
using namespace std;

int main()
{
    int n,nr=0,p=1,c;
    cin>>n;
    while(n)
    {
        c=n%10;
        if(c>0&&c<9)c++;
        nr+=c*p;
        p*=10;
        n/=10;
    }
    cout<<nr;
    return 0;
}
