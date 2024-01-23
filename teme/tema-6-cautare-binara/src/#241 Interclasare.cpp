#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

namespace interclasare {
    int n, m, o;
    int x[100000], y[100000], z[200000];

    void citire() {

        fin >> n;
        for (int i = 0; i < n; i++) {
            fin >> x[i];
        }

        fin >> m;
        for (int i = 0; i < m; i++) {
            fin >> y[i];
        }
    }

    void interclasare() {
        int i = 0;
        int j = 0;

        while (i < n && j < m) {
            z[o++] = x[i] < y[j] ? x[i++] : y[j++];
        }

        while (j < m) {
            z[o++] = y[j++];
        }

        while (i < n) {
            z[o++] = x[i++];
        }
    }

    void afis() {
        int cnt = 1;
        for (int i = 0; i < o; i++) {
            fout << z[i] << " ";

            if (cnt == 10) {
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