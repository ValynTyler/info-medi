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
            cout << '\n';
            for (int j = 1; j <= m; j++) {
                cout << a[i][j] << " ";
            }
        }
    }

    int prime_linii_pare() {
        int cnt = 0;
        for (int i = 2; i <= n; i += 2) {
            for (int j = 1; j <= m; j++) {
                cnt += prim(a[i][j]);
            }
        }

        return cnt;
    }

    void rezolvare() {
        cout << prime_linii_pare();
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();

    return 0;
}
