#include <iostream>

using namespace std;

bool prim(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int d = 3; d * d < n; d += 2) {
        if (n % d == 0) {
            return false;
        }
    }

    return true;
}

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

void rezolvare(int* x, int* y, int n, int& cnt) {
    
    cnt = 0;

    for (int i = n; i > 0; i--) {
        if (prim(x[i])) {
            y[cnt] = x[i];
            cnt++;
        }
    }
}

void afis(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
}

int main() {

    int n, x[201], y[201];
    cin >> n;

    int cnt = 0;

    citire(x, n);
    rezolvare(x, y, n, cnt);
    afis(y, cnt);

    return 0;
}
