#include <iostream>

using namespace std;

int cmmdc(int a, int b) {

    int rest = 0;

    while (b) {
        rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}

bool prime_intre_ele(int a, int b) {
    return cmmdc(a, b) <= 1;
}

int main() {

    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (prime_intre_ele(i, j)) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
