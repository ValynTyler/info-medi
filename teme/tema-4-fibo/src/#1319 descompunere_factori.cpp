#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            n /= d;
            cout << d << " ";
        }
    }

    if (n != 1) {
        cout << n;
    }

    return 0;
}
