#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long s = 0;
    while (n) {
        s += n;
        n /= 10;
    }

    cout << s;

    return 0;
}
