
#include <iostream>

using namespace std;

bool prim(int n) {
    if (n % 2 == 0) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    if (n < 2) {
        return false;
    }

    for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            return false;
        }
    }

    return true;
}

void sub(int n, int& a, int& b) {
    for (int i = n - 1; i >= 2; i--) {
        if (prim(i)) {
            a = i;
            break;
        }
    }
    for (int i = a - 1; i >= 2; i--) {
        if (prim(i)) {
            b = i;
            break;
        }
    }
}

int main() {
    
    int a, b;

    sub(28, a, b);

    cout << a << " " << b;

    return 0;
}
