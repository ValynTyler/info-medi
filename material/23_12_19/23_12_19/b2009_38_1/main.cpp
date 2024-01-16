/**
 1. d

 2. Algoritmul citește n și afișează termenii șirului
 [(i-1)!/2] pentru i de la 1 la n.

Răsunsuri:
a) 0 0 1

b) 8
Ne-apucăm să calculăm până rezultatul se termină în 0, și de-acolo garantat și
următorii 2 pași tot în 0 se termină.
Deci se afișează
[1!/2]=0 [1!/2]=0 [2!/2]=1 [3!/2]=3 [4!/2]=12 [5!/2]=60 [6!/2]=360 [7!/2]=2520

c)
citeşte n (număr natural)
p <- 1
┌pentru i <- 1,n execută
│ p <- p*i
│scrie [p/(i*2)]
└■

d) mai jos
*/
#include <iostream>
using namespace std;

int main()
{
    int n,i,j,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=i;j>=2;j--)
            p*=j;
        cout<<p/(i*2)<<" ";
    }
    return 0;

}
