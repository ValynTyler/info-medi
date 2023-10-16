#include <iostream>

using namespace std;

long long flip(long long n) {

    long long flipped = 0;
    while (n) {
        flipped = flipped * 10 + n % 10;
        n /= 10;
    }

    return flipped;
}

int main() {

    long long n;
    cin >> n;

    long long n1 = 0, n2 = 0;

    do {

        if (n % 2 == 0) {
            n1 = n1 * 10 + n % 10;
        }
        else {
            n2 = n2 * 10 + n % 10;
        }

        n /= 10;

    } while (n);

    n1 = flip(n1);
    n2 = flip(n2);

    cout << abs(n1 - n2);

    return 0;
}
