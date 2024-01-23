#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long fmaxp = -1;

    for (long long d = 2; d * d <= n; d++) {
        
        int p = 0;
        
        while (n % d == 0) {
            n /= d;
            p++;
        }

        if (d > fmaxp) {
            fmaxp = d;
        }
    }

    if (fmaxp == -1) {
        fmaxp = n;
    }

    cout << fmaxp;

    return 0;
}
