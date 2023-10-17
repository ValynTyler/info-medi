#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long max = -1;

    do {
        if (n % 2 == 0) {
            if (n % 10 > max) {
                max = n % 10;
            }
        }

        n /= 10;

    } while (n);

    cout << (max != -1 ? max : 10);

    return 0;
}
