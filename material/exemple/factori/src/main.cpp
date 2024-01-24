#include <iostream>

using namespace std;

void factori(int n) {
    for (int d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            n /= d;
            cout << d << " ";
        }
    }
    // account for prime numbers
    if (n != 0) {
        cout << n;
    }
}

int main() {

    return 0;
}
