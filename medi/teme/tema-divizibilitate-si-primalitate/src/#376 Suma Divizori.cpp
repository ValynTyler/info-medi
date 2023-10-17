#include <iostream>

using namespace std;

long long sum_div(long long n) {
    long long s = 0;
    for (long long d = 1; d * d <= n; d++) {

        if (d * d == n) {
            s += d;
        }
        else if (n % d == 0) {
            s += d + n / d;
        }
    }
    return s;
}

int oglindit(int n) {
    int ogl = 0;
    while (n) {
        ogl = n % 10 + ogl * 10;
        n /= 10;
    }
    return ogl;
}

int main() {

    int n;
    cin >> n;

    int s = 0;
    while (cin >> n)
    {
        s += sum_div(oglindit(n));
    }
    

    cout << s;

    return 0;
}
