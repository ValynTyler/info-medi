#include <iostream>

using namespace std;

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

bool is_lr(int* v, int i, int n) {

    // check left
    // left should be lesser than v[i]
    for (int j = 0; j < i; j++) {
        if (v[i] < v[j]) {
            return false;
        }
    }

    // check right
    for (int j = i; j < n; j++) {
        if (v[i] > v[j]) {
            return false;
        }
    }

    return true;
}

int main() {

    int n, v[1001];

    cin >> n;
    citire(v, n);

    int cnt_lr = 0;
    for (int i = 0; i < n; i++) {
        if (is_lr(v, i, n)) {
            cnt_lr++;
        }
    }

    cout << cnt_lr;

    return 0;
}
