#include <iostream>

using namespace std;

void divPrim(int n, int& s) {
    s = 0;
    int cnt = 0;

    while (n % 2 == 0) {
        n /= 2;
        cnt++;
    }
    if (cnt % 2 == 1) {
        s += 2;
    }

    for (int d = 3; d * d <= n; d += 2) {
        cnt = 0;
        while (n % d == 0) {
            n /= d;
            cnt++;
        }
        if (cnt % 2 == 1) {
            s += d * cnt;
        }
    }

    if (n != 0) {
        s += n;
    }
}

int main() {

    int s;
    divPrim(360, s);
    cout << s;

    return 0;
}
