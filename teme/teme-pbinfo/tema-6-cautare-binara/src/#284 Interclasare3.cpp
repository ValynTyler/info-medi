#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");

bool par(int n) {
    return n % 2 == 0;
}

namespace interclasare {
    int n, m, o;
    int x[100000], y[100000], z[200000];

    void citire() {

        fin >> n;
        fin >> m;

        for (int i = 0; i < n; i++) {
            fin >> x[i];
        }

        for (int i = 0; i < m; i++) {
            fin >> y[i];
        }
    }

    void interclasare() {
        int i = 0;
        int j = m - 1;

        while (i < n && j >= 0) {
            if (x[i] <= y[j]) {
                if (par(x[i])) {
                    z[o++] = x[i];
                }
                i++;
            }

            if (x[i] > y[j]) {
                if (par(y[j])) {
                    z[o++] = y[j];
                }
                j--;
            }
        }

        while (i < n) {
            if (par(x[i])) {
                z[o++] = x[i];
            }
            i++;
        }

        while (j >= 0) {
            if (par(y[j])) {
                z[o++] = y[j];
            }
            j--;
        }
    }

    void afis() {
        int cnt = 1;
        for (int i = 0; i < o; i++) {
            fout << z[i] << " ";

            if (cnt == 20) {
                fout << '\n';
                cnt = 0;
            }

            cnt++;
        }
    }
}

int main() {

    interclasare::citire();
    interclasare::interclasare();
    interclasare::afis();

    return 0;
}