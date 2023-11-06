#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,nr=0,d;
    long long sum=0;
    cin >> n;
    for(d=1; d*d<n; d++)
        if(n%d==0)
        {
            nr+=2;
            sum+=d+n/d;
        }
    if(d*d==n)
    {
        sum+=d;
        nr++;
    }
    cout<<fixed<<setprecision(2)<<(double)sum/nr;
    return 0;
}
