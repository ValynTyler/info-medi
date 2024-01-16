/**
1. b

2. Citește un șir de numere a cărui introducere se termină cu 0, care nu se ia
în seamă, și calculează suma numerelor formate din ultimele două cifre ale ficeăreia dintre
valorile citite, luate în ordine inversă.

Răspunsuri:
a) 249

b) 4950

 De fapt, dacă băgăm toate nr. de la 1 la 99 și le scriem oglinditele, per total
vor fi tot aceleași numere, dar ordinea va fi alta:
        1->10  2->20  3->30 .. 19->90
10-> 1 11->11 12->21 13->31 .. 19->91
20-> 2 21->12 22->22 23->32 .. 29->92
...
90-> 9 91->19 92->29 93->39 .. 99->99

 Deci suma lor este de fapt suma Gauss 1+2+3+..+99 = 99*100/2 = 99*50 = 4950

c)
s <- 0
citeşte v (valoare naturală)
┌dacă v ≠ 0 atunci  ///acest dacă NU este redundant
│┌execută
││ a  <-  v%10
││ b  <-  [v/10]%10
││ s  <-  s + a*10 + b
││ citeşte v
│└cât timp v ≠ 0
└■
scrie s
*/
#include <iostream>
using namespace std;

int main()
{
    int s=0,v,a,b;
    cin>>v;
    while(v)
    {
        a=v%10;
        b=v/10%10;
        s=s+a*10+b;
        cin>>v;
    }
    cout<<s;
    return 0;
}
