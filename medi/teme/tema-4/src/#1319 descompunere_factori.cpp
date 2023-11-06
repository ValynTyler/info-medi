#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int d = 2;

    while (d * d <= n) {
        while (n % d == 0) {
            n /= d;
            cout << d << " ";
        }
        d += 1;
    }
    
    if (n != 1) {
        cout << n;
    }

    return 0;
}
