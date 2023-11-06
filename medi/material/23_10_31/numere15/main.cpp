#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long n;
    cin >> n;
    long long n1 = 0, n2 = 0,p1=1,p2=1;
    do {

        if (n % 2 == 0) {
            n1 = n1 + n % 10*p1;
            p1*=10;
        }
        else {
            n2 = n2 + n % 10*p2;
            p2*=10;
        }
        n /= 10;
    } while (n);
    cout << abs(n1 - n2);
    return 0;
}
