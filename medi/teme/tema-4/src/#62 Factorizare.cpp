#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int d = 2; d * d <= n; d++) {
        
        int p = 0;
        
        while (n % d == 0) {
            n /= d;
            p++;
        }

        if ( p > 0) {
            cout << d << " " << p << '\n';
        }
    }

    // daca vre-un factor are puterea mai mica decât 2 (1),
    // afișăm după repetitivă rezultatul corespunzător
    if (n != 1) {
        cout << n << " " << 1 << '\n';
    }

    return 0;
}
