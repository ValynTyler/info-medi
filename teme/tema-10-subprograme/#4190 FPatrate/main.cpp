#include <iostream>

using namespace std;

void factori(int n) {

    int x = 0;
    int y = 1;
    bool found_x = false;

    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0 && !found_x) {
            n /= d;
            found_x = true;
            x = d;
            cout << x << endl;
        }
        else {
            while (n % d == 0) {
                n /= d;
                y *= d;
                cout << d << " ";
            }
        }
    }

    if (n != 0) {
        cout << n;
    }
}

int main() {

    factori(21 * 17);

    return 0;
}
