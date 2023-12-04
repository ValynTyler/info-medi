#include <iostream>
using namespace std;
int a[101][101], v[1000001] ,n, m, Maxiap=0;
int main()
{
   cin>>n>>m;
   for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
    {
        cin>>a[i][j];
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            v[a[i][j]]++;
        }
    }
    for (int i=1; i<=1000000; i++ )
    {
        if (v[i]>=v[Maxiap])
        {
            Maxiap=i;
        }
    }
    cout<<Maxiap;
    return 0;
}
