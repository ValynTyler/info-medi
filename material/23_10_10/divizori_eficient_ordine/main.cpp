/**
 Afișarea eficientă a divizorilor, în ordine
*/
#include <iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n;
    for(d=1;d*d<n;d++)
        if(n%d==0)cout<<d<<" ";
    if(d*d==n)
        cout<<d<<" ";
    d--;
    while(d>=1)
    {
        if(n%d==0)
            cout<<n/d<<" ";
        d--;
    }
    return 0;
}
