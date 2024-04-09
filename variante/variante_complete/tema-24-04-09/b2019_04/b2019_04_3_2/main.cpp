#include <iostream>

using namespace std;


/*
4 5
1 2 4 2 1
3 5 5 5 3
2 4 1 4 2
1 1 1 1 1
*/

int tabel[21][21];

bool is_simetric(int n, int m, int tabel[21][21]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            if (tabel[i][j] != tabel[i][m - j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tabel[i][j];
        }
    }

    cout << (is_simetric(n, m, tabel) ? "DA" : "NU");

    return 0;
}
