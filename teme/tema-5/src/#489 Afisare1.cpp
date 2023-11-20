#include <iostream>

using namespace std;

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

void afis(int* vec, int n) {

    for (int i = 0; i <= n / 2; i++) {

        if (i == n / 2) {

            if (n % 2 == 1) {
                cout << vec[i];
            }
            return;
        }

        cout << vec[i] << " " << vec[n - i - 1] << " ";
    }
}

int main() {

    int n, a[1001];

    cin >> n;

    citire(a, n);
    afis(a, n);

    return 0;
}
