#include <iostream>
using namespace std;
int main()
{
    int a[101][101], n, v1 = 0, v2 = 0,S=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n-1; i++)
    {
        v1+=a[i][i+1];
        v2+=a[i+1][i];
    }
    S=v1+v2;
    cout << S;
    return 0;
}
