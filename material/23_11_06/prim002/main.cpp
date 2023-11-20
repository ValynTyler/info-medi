#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long d=3,dmax=0;
    while(n%2==0)
        {
            dmax=2;
            n=n/2;
        }
    while(d*d<=n)
    {
        while(n%d==0)
        {
            n=n/d;
            dmax=d;
        }
        d+=2;
    }
    if(n!=1)
        dmax=n;
    cout<<dmax;
    return 0;
}
