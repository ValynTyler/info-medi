#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,a,prod=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        prod*=a;
    }
    cout<<pow(prod,1./n);
    return 0;
}
