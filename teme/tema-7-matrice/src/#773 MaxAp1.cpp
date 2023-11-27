#include <iostream>

using namespace std;

namespace matrice {

    int n;
    int m;

    int a[101][101];
    /*
    ex:
    n = 4  'n șiruri'
    m = 3  'm coloane'
    m  =  3 coloane

    __ __ __
    5  12 10 } n     -----
    3  9  1  } =     -----
    7  10 1  } 4     -----
    10 9  3  } linii -----
    |  |  |
    |  |  |
    |  |  |

    // asadar, daca int i merge de la 0 la n inclusiv,
    // i va fi analog cu un 'y' (axa verticala) respectiv
    // j va fi analog cu un 'x' (axa orizontala)
    */
    void citire() {
        cin >> n >> m;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j]; // pe a 'i'-a linie (i <= n) se plaseaza in pozitia 'j' elementul citit
                // asadar, citirea executa in ordinea:
                // 1  2  3
                // 4  5  6
                // 7  8  9
                // 10 11 12
            }
        }
    }

    void afis() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
    }

    void schimb_linii(int i1, int i2) {
        for (int j = 1; j <= m; j++) {
            int aux = a[i1][j];
            a[i1][j] = a[i2][j];
            a[i2][j] = aux;
        }
    }

    int sum_linie(int i) {
        int cnt = 0;
        for (int j = 1; j <= m; j++) {
            cnt += a[i][j];
        }
        return cnt;
    }

    int nr_ap(int x) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cnt += (x == a[i][j]);
            }
        }

        return cnt;
    }

    void rezolvare() {
        int nr_max = 0;
        int ap_max = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                
                int nr = a[i][j];
                int ap = nr_ap(nr);
                
                if (ap >= ap_max && nr >= nr_max) {
                    nr_max = nr;
                    ap_max = ap;
                }
            }
        }

        cout << nr_max;
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();

    return 0;
}
