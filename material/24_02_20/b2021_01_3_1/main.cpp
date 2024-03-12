#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

void divPrim(int n,int &s)
{
    int d,nr;
    for(d=2;d<=n;d++)
    {
        nr=0;
        while(n%d==0)
        {
            nr++;
            n=n/d;
        }
        if(nr%2!=0)
            s=s+d;
    }
}

int main()
{
    int n=360,s=0;
    divPrim(n,s);
    cout<<s;
    return 0;
}
