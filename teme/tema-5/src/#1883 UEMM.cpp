#include <iostream>

using namespace std;

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

int main() {

    int n, v[1001];

    cin >> n;
    citire(v, n);

    for (int i = 0; i < n; i++) {
        int res = -1;
        for (int j = i; j < n; j++) {
            if (v[j] > v[i])
            {
                res = v[j];
                break;
            }
        }
        cout << res << " ";
    }

    return 0;
}
