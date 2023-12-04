#include <iostream>

using namespace std;
int a[101][101], n, m;
int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        int s=0;
        for (int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            s+=a[i][j];
        }
        a[i][0]=s;
    }
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (a[i][0]>a[j][0])
            {
                for (int k=0; k<=m; k++)
                    swap (a[i][k], a[j][k]);
            }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<'\n';
    }
    return 0;
}
