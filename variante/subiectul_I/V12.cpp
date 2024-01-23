/**
1. d

2. Citește un șir de numere a cărui introducere se gată cu 0, care NU se ia în seamă.

Formează un număr cu prima cifră de la fiecare valoare introdusă.

Răspunsuri:

a) 17396

b) posibile răspunsuri:
   3 2 1 0
   312 2372 107 0

c) mai jos

d)
citeşte x (număr natural)
y <- 0
┌dacă x≠0 atunci
│┌execută
││┌dacă x>9 atunci
│││┌execută
││││ x <- [x/10]
│││└cât timp x>9
│││ y <- y*10+x
││└■
││ citeşte x
│└cât timp x≠0
└■
scrie y
*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    y=0;
    while(x)
    {
        while(x>9)
            x/=10;
        y=y*10+x;
        cin>>x;
    }
    cout<<y;
    return 0;
}
