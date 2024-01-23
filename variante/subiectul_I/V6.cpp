/**
 1. Răspuns: a

 2. Se citește un număr. Dacă nr. are cifrele în ordine strict descrescătoare
se afișează prima. În orice alt caz se afișează 11

Răspunsuri:
a) 9

b) 9867

c)

citeşte n (număr natural)
s <- -1
┌dacă n>0 atunci
│┌execută
││┌dacă n%10>s atunci
│││ s <- n%10
│││altfel
│││ s <- 11
││└■
││ n <- [n/10]
│└cât timp n>0
└■
scrie s
*/
#include <iostream>
using namespace std;

int main()
{
    int n,s=-1;
    cin>>n;
    while(n>0)
    {
        if(n%10>s)
            s=n%10;
        else
            s=11;
        n/=10;
    }
    cout<<s;
    return 0;
}
