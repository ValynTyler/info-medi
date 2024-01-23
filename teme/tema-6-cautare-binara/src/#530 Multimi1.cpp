#include <iostream>
#include <fstream>

using namespace std;

bool par(int n) {
    return n % 2 == 0;
}

namespace multimi {
    int n, m;
    int x[100000], y[100000];

    int p, q;
    int comm[100000], all[200000];

    void citire() {
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> y[i];
        }
    }

    void multimi() {
        int i = 0;int j = 0;

        while (i < n && j < m) {
            if (x[i] < y[j]) {
                all[q++] = x[i++];
            }

            if (x[i] > y[j]) {
                all[q++] = y[j++];
            }

            if (x[i] == y[j]) {
                all[q++] = x[i];
                comm[p++] = x[i];
                i++;
                j++;
            }
        }

        while (i < n) {
            all[q++] = x[i++];
        }
        
        while (j < m) {
            all[q++] = y[j++];
        }
    }

    void afis() {
        for (int i = 0; i < q; i++) {
            cout << all[i] << " ";
        }

        cout << '\n';

        for (int i = 0; i < p; i++) {
            cout << comm[i] << " ";
        }
    }
}

int main() {

    multimi::citire();
    multimi::multimi();
    multimi::afis();

    return 0;
}