#include <iostream>

using namespace std;

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

int cmmdc(int x, int y) {
    while (y) {
        int rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

bool prime_intre_ele(int x, int y) {
    return cmmdc(x, y) == 1;
}

void afis(int* vec, int n) {

    int cnt = 0;
    for (int i = 0; i < n / 2; i++) {

        if (prime_intre_ele(vec[i], vec[n - i - 1])) {
            cnt++;
        }
    }
    cout << cnt;
}

int main() {

    int n, vec[201];
    cin >> n;

    citire(vec, n);
    afis(vec, n);

    return 0;
}
