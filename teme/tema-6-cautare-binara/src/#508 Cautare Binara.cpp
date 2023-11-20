#include <iostream>

using namespace std;

namespace cautare {

    int n;
    int m;

    int x[25000];
    int y;

    bool cautare_binara(int query, int left_index, int right_index) {

        int middle_index = (left_index + right_index) / 2;

        if (query == x[middle_index]) {
            return true;
        }
        
        if (left_index == right_index) {
            return false;
        }

        return (
            query < x[middle_index]
            ? cautare_binara(query, left_index, middle_index - 1)
            : cautare_binara(query, middle_index + 1, right_index)
        );
    }

    void rezolvare() {

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> y;
            cout << cautare_binara(y, 0, n) << " ";
        }
    }
}

int main() {

    cautare::rezolvare();

    return 0;
}
