#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    long long n;
    cin >> n;

    int cnt = 0;
    long long s = 0;
    for (long long d = 1; d * d <= n; d++) {
        
        if (d * d == n) {
            s += d;
            cnt++;
        }
        else if (n % d == 0) {
            s += d + n / d;
            cnt += 2;
        }
    }


    cout << fixed << setprecision(2) << (float)s / cnt;

    return 0;
}
