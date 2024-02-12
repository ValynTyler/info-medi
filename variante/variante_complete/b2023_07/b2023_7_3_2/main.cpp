#include <iostream>
#include <fstream>

using namespace std;

// for convenience, folosesc fisiere.
ifstream fin("bac.txt");

int m, n;
int a[21][21];

int patr(int lin, int col) {
    return
        a[lin][col] +
        a[lin + 1][col] +
        a[lin][col + 1] +
        a[lin + 1][col + 1]
        ;
}

void cit() {
    fin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fin >> a[i][j];
        }
    }
}

int main() {

    cit();

    int max = -1;

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            int current = patr(i, j);
            if (current > max) {
                max = current;
            }
        }
    }

    cout << max;

    return 0;
}
