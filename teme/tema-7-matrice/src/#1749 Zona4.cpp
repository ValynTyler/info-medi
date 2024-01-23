#include <iostream>

using namespace std;

namespace matrice {

    int n, z;
    int a[201][201];

    // j = 1 j = 2 j = 3
    // -----------------
    // [1,1] [2,1] [3,1] | i = 1 
    // [1,2] [2,2] [3,2] | i = 2 
    // [1,3] [2,3] [3,3] | i = 3
    // 
    // Citirea se realizeaza ca in limba comuna,
    // de la stanga la dreapta, de sus in jos 
    void citire() {
        cin >> n >> z;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
    }

    void afisare() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }

    void rezolvare() {
        // cout << '\n';
        int suma = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                switch (z) {
                case 1:
                    if (i < j && i + j < n + 1) {
                        // cout << a[i][j] << ' ';
                        suma += a[i][j];
                    }
                    else {
                        // cout << "x ";
                    }
                    break;

                case 2:
                    if (i < j && i + j > n + 1) {
                        // cout << a[i][j] << ' ';
                        suma += a[i][j];
                    }
                    else {
                        // cout << "x ";
                    }
                    break;

                case 3:
                    if (i > j && i + j > n + 1) {
                        // cout << a[i][j] << ' ';
                        suma += a[i][j];
                    }
                    else {
                        // cout << "x ";
                    }
                    break;

                case 4:
                    if (i > j && i + j < n + 1) {
                        // cout << a[i][j] << ' ';
                        suma += a[i][j];
                    }
                    else {
                        // cout << "x ";
                    }
                    break;

                default:
                    break;
                }

            }
            // cout << '\n';
        }
        cout << suma;
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();

    return 0;
}
