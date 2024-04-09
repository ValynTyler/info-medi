#include <iostream>
using namespace std;

int kpn(int a,int b,int k)
{
    int ok=0;
    for(int i=a;i<=b;i++)
    {
        int d,s=1;
        for(d=2;d<=i;d++)
           if(i%d==0)
            s=s+d;
        if(i%2==s%2)
                ok++;
        if(ok==k)
            return i;
    }
    return -1;
}
int main()
{
    cout<<kpn(27,50,3);
    return 0;
}
