#include <iostream>

using namespace std;

namespace matrice {

    int n;
    int m;

    int a[51][51];
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

    int sum_linie(int i) {
        int cnt = 0;
        for (int j = 1; j <= m; j++) {
            cnt += a[i][j];
        }
        return cnt;
    }

    int sum_coloana(int j) {
        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            cnt += a[i][j];
        }
        return cnt;
    }

    int min_col_index(int j) {
        int min = 10000;
        int min_index = 0;
        for (int i = 1; i <= n; i++) {
            int nr = a[i][j];
            if (nr < min) {
                min = nr;
                min_index = i;
            }
        }

        return min_index;
    }

    void schimb(int& x, int& y) {
        int aux = x;
        x = y;
        y = aux;
    }

    void rezolvare() {
        int min_pl_index = min_col_index(1);
        int min_ul_index = min_col_index(m);

        schimb(a[min_pl_index][1], a[min_ul_index][m]);
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();
    matrice::afis();

    return 0;
}
