#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

namespace cautare {

    int n;
    int m;

    long long x[25000];
    long long y;

    bool cautare_binara(long long query, int left_index, int right_index) {

        int middle_index = (left_index + right_index) / 2;

        if (query == x[middle_index]) {
            return true;
        }

        if (left_index > right_index) {
            return false;
        }

        return (
            query < x[middle_index]
            ? cautare_binara(query, left_index, middle_index - 1)
            : cautare_binara(query, middle_index + 1, right_index)
        );
    }

    void rezolvare() {

        fin >> n;
        for (int i = 0; i < n; i++) {
            fin >> x[i];
        }

        int cnt = 0;
        fin >> m;
        for (int j = 0; j < m; j++) {
            fin >> y;
            cnt += cautare_binara(y, 0, n);
        }

        fout << cnt;
    }
}

int main() {

    cautare::rezolvare();

    return 0;
}
