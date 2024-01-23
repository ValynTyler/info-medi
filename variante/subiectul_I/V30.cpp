/**
1. d

2. Citește un număr și formează altul prin scăderea cu 1 a fiecărei cifre nenule din
cel dat.

Răspunsuri:

a) 4061

b) mai jos

c)
citeste n (număr natural)
m <- 0
p <- 1
┌dacă n>0 atunci
│┌execută
││ c <- n%10
││ ┌dacă c>0 atunci
││ │c <- c-1
││ └■
││ m <- m+c*p
││ p <- p*10
││ n <- [n/10]
│└cât timp n>0
└■
scrie m

d) 3009, 3109, 3019, 3119
*/
#include <iostream>
using namespace std;

int main()
{
    int n,m=0,p=1,c;
    cin>>n;
    while(n)
    {
        c=n%10;
        if(c>0)c--;
        m=m+c*p;
        p*=10;
        n/=10;
    }
    cout<<m;
    return 0;
}
