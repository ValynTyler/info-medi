#include <iostream>
using namespace std;

int main()
{
    int ns,np,tab[1001][51];
    cin >> ns >> np;
    for (int i = 1; i <= ns; i++)
        for (int j = 1; j <= np; j++)
            cin >> tab[i][j];
    for (int i = 1; i <= ns; i++)
    {
        int mx = -1,jmax = 0;
        for (int j = 1; j <= np; j++)
            if (tab[i][j] > mx)
            {
                mx = tab[i][j];
                jmax = j;
            }
        cout << i << ':' << jmax << ' ';
    }
    return 0;
}
