#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;


    long long s = 0;
    for (long long d = 1; d * d <= n; d++) {

        if (d * d == n) {

            if (d % 2 != 0) {
                s += d;
            }
        }
        else if (n % d == 0) {

            if (d % 2 != 0) {
                s += d;
            }
            if ((n / d) % 2 != 0) {
                s += n / d;
            }

        }
    }


    cout << s;

    return 0;
}
