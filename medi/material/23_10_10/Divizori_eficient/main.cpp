/**
  Determinarea eficientă a divizorilor unui număr

- dacă nu ne trebuie în ordine:
*/
#include <iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n;
    for(d=1;d*d<n;d++)///mergem cu d< decât rădăcina pătrată
        if(n%d==0)
            cout<<d<<" "<<n/d<<" ";
    if(d*d==n)///la ieșire veificăm dacă nu cuvma e pătrat perfect
            cout<<d;
    return 0;
}
