#include <iostream>

using namespace std;

namespace matrice
{

int n;
int m;

int a[101][101];

void citire()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j]; // pe a 'i'-a linie (i <= n) se plaseaza in pozitia 'j' elementul citit
            // asadar, citirea executa in ordinea:
            // 1  2  3
            // 4  5  6
            // 7  8  9
            // 10 11 12
        }
    }
}

int nr_ap(int x)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cnt += (x == a[i][j]);
        }
    }

    return cnt;
}

void rezolvare()
{
    int nr_max = 0;
    int ap_max = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            int nr = a[i][j];
            int ap = nr_ap(nr);

            if (ap > ap_max)
            {
                nr_max = nr;
                ap_max = ap;
            }
            else if(ap==ap_max && nr>nr_max)
                nr_max=nr;
        }
    }

    cout << nr_max;
}
}

int main()
{
    matrice::citire();
    matrice::rezolvare();
    return 0;
}
