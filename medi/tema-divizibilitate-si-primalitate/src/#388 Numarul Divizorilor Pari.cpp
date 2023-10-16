#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    int cnt = 0;
    long long s = 0;
    for (long long d = 1; d * d <= n; d++) {

        if (d * d == n) {

            if (d % 2 == 0) {
                s += d;
                cnt++;
            }
        }
        else if (n % d == 0) {

            if (d % 2 == 0) {
                s += d;
                cnt++;
            }
            if ((n / d) % 2 == 0) {
                s += n / d;
                cnt++;
            }

        }
    }


    cout << cnt;

    return 0;
}
