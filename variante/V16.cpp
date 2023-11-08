/**
1. a

2. Afișează niște serii de asteriscuri. Prima serie are n-1 asteriscuri și apoi fiecare
serie are cu câte un asterisc mai puțin.
  Seriile cu număr de ordine par mai au afișat un '#' în fața lor.
Răspunsuri:

a) ***#***

b) 12

Numărul de * este deci n-1+(n-2)+...+3+2+1

deci e suma Gauss n*(n-1)/2  și într-adevăr, dacă n=12 suma asta este 66

c) mai jos

d)
citeşte n (număr natural nenul)
i <- 1
┌cât timp i<=n execută
│┌dacă i%2=0 atunci
││ scrie ’#’
│└■
│j <- i+1
│┌cât timp j <=n execută
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
    int i,j,n;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        if(i%2==0)cout<<"#";
        for(j=i+1;j<=n;j++)
            cout<<"*";
    }
    return 0;
}
