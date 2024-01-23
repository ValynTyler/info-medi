#include <iostream>
using namespace std;

int prim(int a)
{
    if(a<=1||a>2&&a%2==0)
                    return 0;
    for(int i=3; i*i<=a; i+=2)
        if(a%i==0)
            return 0;
    return 1;
}
void DNPI(int n)
{
    for(int d=1; d<=n; d+=2)
        if(n%d==0 && !prim(d))
            cout<<d<<" ";
}
int main()
{
    DNPI(90);
    return 0;
}
