#include <iostream>
using namespace std;

int main()
{
    int a[21][21],i,j,k,n,aux;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    cin>>k;
    aux=a[k][k-1];
    for(j=k-2;j>=1;j--)
        a[k][j+1]=a[k][j];
    a[k][1]=aux;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
