#include<iostream>
using namespace std;
int main()
{
    int a[101][101],n,m,c;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        c=a[i][1];
        for(int j=1; j<=m-1; j++)
            a[i][j]=a[i][j+1];
        a[i][m]=c;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
