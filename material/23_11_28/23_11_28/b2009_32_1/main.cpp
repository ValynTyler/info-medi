/**
1. d

2. Pleacă de la numărul minim și îl dublează în mod repetat, cât timp este
mai mic sau egal cu cel maxim, afișând atât numărul inițial cât și toate
numerele obținute, la final afișând și dublul care îl depășește pe maxim.

Răspunsuri:
a) 8 18 36 72 144 288

b) Răspuns: 1199

c) mai jos

d)
citeşte a,b (numere naturale nenule)
┌dacă a>b atunci
│ c <- b
│ b <- a
│ a <- c
└■
┌dacă a<=b atunci
│┌execută
││ scrie a
││ a <- a*2
│└cât timp a<=b
└■
scrie a
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        c=a;a=b;b=c;
    }
    while(a<=b)
    {
        cout<<a<<" ";
        a*=2;
    }
    cout<<a;
    return 0;
}
