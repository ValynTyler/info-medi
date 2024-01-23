/**
1. a

2. Citește n și afișează n-1 grupuri de asteriscuri.
În grupul 1 sunt n-1 asteriscuri, apoi în grupul 2 n-2 asteriscuri, etc.
În fața grupurilor cu nr. de ordine par afișează un #

Răspusuri:
a) ***#***

b) 12

(nr. total de asteriscuri este suma gauss de n-1, adică n*(n-1)/2
  Dacă n=12 suma gauss de n-1 este 66)

c) mai jos

d)
citeşte n (număr natural nenul)
i <- 1
┌cât timp i <= n-1 execută
│┌dacă i%2=0 atunci
││ scrie ’#’
│└■
│ j <- i+1
│┌cât timp j <= n execută
││ scrie ’*’
││ j <- j+1
│└■
│ i <- i+1
└■
*/
#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        if(i%2==0)
            cout<<"#";
        for(j=i+1;j<=n;j++)
            cout<<"*";
    }
    return 0;
}
