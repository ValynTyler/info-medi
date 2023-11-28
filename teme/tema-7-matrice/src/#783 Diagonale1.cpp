#include <iostream>

using namespace std;

namespace matrice {
    int n;
    int a[101][101];

    void citire() {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
    }

    void rezolvare() {
        long long suma = 0;
        for (int i = 1; i < n; i++) {
            suma += a[i+1][i] + a[i][i+1];
        }
        cout << suma;
    }
}

int main() {

    matrice::citire();
    matrice::rezolvare();

    return 0;
}
