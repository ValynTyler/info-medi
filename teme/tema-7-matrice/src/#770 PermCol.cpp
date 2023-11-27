#include <iostream>

using namespace std;

bool prim(int n) {
    if (n < 2) {
        return 0;
    }

    if (n % 2 == 0) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            return 0;
        }
    }

    return 1;
}

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

    /*
        4 6
        4 20 15 23 18 9
        1 8 23 22 14 18
        17 15 13 18 12 15
        3 18 8 20 12 5
        */

        // =>

        /*
        20 15 23 18 9 4
        8 23 22 14 18 1
        15 13 18 12 15 17
        18 8 20 12 5 3
    */

    /*
        a b c
        d e f
        g h i
        ~
        =>
        b c a
        e f d
        h i g
            ~
    */
    void rezolvare() {

        int prim_col[101];
        for (int i = 1; i <= n; i++) {
            prim_col[i] = a[i][1];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < m; j++) {
                a[i][j] = a[i][j + 1];
            }
        }

        for (int i = 1; i <= n; i++) {
            a[i][m] = prim_col[i];
        }
    }
}

/*
    4 6
    4 20 15 23 18 9
    1 8 23 22 14 18
    17 15 13 18 12 15
    3 18 8 20 12 5
*/

int main() {

    matrice::citire();
    matrice::rezolvare();
    matrice::afis();

    return 0;
}
