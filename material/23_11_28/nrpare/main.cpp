#include <iostream>

using namespace std;

int f[101];///f[i] va număra câte elemente pare sunt pe linia i
int main()
{
    int a[101][101], maxpar=-1, n, m, pozpar;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
                f[i]++;
        }
        if (f[i] > maxpar)
            maxpar = f[i];
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == maxpar)
            cout << i<<" ";
    return 0;
}
