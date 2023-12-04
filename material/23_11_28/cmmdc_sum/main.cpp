#include <iostream>
#include <cmath>

using namespace std;

int euclid(int a, int b) {
    while (b)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

namespace matrice {

    int n;
    int a[21][21];

    void citire() {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
    }

    int sum_sub_diag_pcp() {
        int suma = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                suma += a[i][j];
            }
        }
        return suma;
    }

    int sum_sup_diag_pcp() {
        int suma = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                suma += a[i][j];
            }
        }
        return suma;
    }

    void rezolvare() {
        cout << euclid(sum_sup_diag_pcp(), sum_sub_diag_pcp());
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();
    return 0;
}
