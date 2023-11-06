#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    // pt ca n < 10, (n!) POATE FI > sizeof(int)
    long long prod = 1;
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        prod *= x;
    }
    
    double res = pow(prod, 1.00/n);
    cout << res;

    return 0;
}
