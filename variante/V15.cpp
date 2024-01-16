/**
1. d

2. Citește a și n și calculează următoarea sumă:
     a+1*1-2*2+3*3-4*4+...

Răspunsuri:
a) 4

b) mai jos

c) 4

d) varianta complicată:
     a <- a-(i-1)*(i-1)  - ne gândim că, dacă i este par, ceea ce s-a adunat la pasul trecut
                        să se scadă la pasul ăsta cu scopul de a da 0

  varianta simplă:
     a <- 0
*/
#include <iostream>
using namespace std;

int main()
{
    int a,n,i;
    cin>>a>>n;
    for(i=1;i<=n;i++)
        if(i%2==0)
            a=a-i*i;
        else
            a=a+i*i;
    cout<<a;
    return 0;
}
