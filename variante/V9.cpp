/**
1. b

2. Citește un număr. Dacă are cifrele în ordine strict crescătoare, o afișează pe prima.
Dacă nu, afișează -1

Răspunsuri:

a) 1

b) 1023

c)

citeşte n (număr natural)
s <- 10
┌dacă n>0 atunci
│┌execută
││┌dacă n%10<s atunci
│││ s <- n%10
│││altfel
│││ s <- -1
││└■
││ n <- [n/10]
│└cât timp n>0
└■
scrie s

d) mai jos
*/
#include <iostream>
using namespace std;

int main()
{
    int n,s=10;
    cin>>n;
    while(n>0)
    {
        if(n%10<s)
            s=n%10;
        else
            s=-1;
        n/=10;
    }
    cout<<s;
    return 0;
}
