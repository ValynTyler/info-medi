#include <iostream>
using namespace std;
int main()
{
    int n,p=1,avem_impare=0;
    cin>>n;
    do
    {
        if ((n%10)%2==1)
        {
            p*=n%10;
            avem_impare=1;
        }
        n/=10;
    }
    while(n);
    if(avem_impare)
        cout<<p;
    else
        cout<<"-1";
    return 0;
}
