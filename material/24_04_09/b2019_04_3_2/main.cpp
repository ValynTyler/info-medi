#include <iostream>
using namespace std;

int main()
{
    int n, m,c=1,a[22][22],j1,j2;
    cin>>m>>n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i=1; i<=m; i++){
            j1=1;j2=n;
            while(j1<j2 && a[i][j1]==a[i][j2])
                    j1++,j2--;
            if(j1<j2)
            {
                c=0;
                cout<<"NU";break;
            }
    }
    if (c==1)
        cout<<"DA";
    return 0;
}
