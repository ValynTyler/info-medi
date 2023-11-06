#include <iostream>
#include<iomanip>
using namespace std;

int prim(int x)
{
    if(x<2 || x>2 && x%2==0)
        return 0;
    for(int d=3; d*d<=x; d+=2)
        if(x%d==0)
            return 0;
    return 1;
}

int main()
{
    int n,a,s=0,nr=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(prim(a)==1)
        {
            s=s+a;
            nr++;
        }
    }
    cout<<fixed<<setprecision(4)<<(double)s/nr;
    return 0;
}
