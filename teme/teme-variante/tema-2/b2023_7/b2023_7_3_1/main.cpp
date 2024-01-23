#include <iostream>

using namespace std;

bool eprim(int x) {
    if (x % 2 == 0 && x > 2 || x < 2) {
        return false;
    }

    for (int d = 3; d * d <= x; d += 2) {
        if (x % d == 0) {
            return false;
        }
    }

    return true;
}

void DNPI(int n) {

    cout << 1 << " ";

    for (int d = 3; d * 2 <= n; d += 2) {
        if (!eprim(d) && (n % d == 0)) {
            cout << d << " ";
        }
    }
    if (n % 2 == 1) {
        cout << n;
    }
}

int main() {
    
    DNPI(90);

    return 0;
}
