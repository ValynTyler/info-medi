/**
1. c
(deoarece z este de tip real)

2. Pleacă de la ultima cifră a numărului și formează un număr nou în care selectează
un subșir naiv de cifre în ordine descrescătoare (selectează o cifră doar
dacă este strict mai mică decât ultima aleasă)

Răspunsuri:
a) 9831

b) 1230

c) mai jos

d)
citeşte n (număr natural)
a <- n%10
m <- a
┌cât timp n>9 execută
│ n <- [n/10]
│ b <- n%10
│┌dacă a>b atunci
││ m <- m*10+b
││ a <- b
│└■
└■
scrie m
*/
#include <iostream>
using namespace std;

int main()
{
    int n,a,m,b;
    cin>>n;
    a=n%10;
    m=a;
    while(n>9)
    {
        n/=10;
        b=n%10;
        if(a>b)
        {
            m=m*10+b;
            a=b;
        }
    }
    cout<<m;
    return 0;
}
