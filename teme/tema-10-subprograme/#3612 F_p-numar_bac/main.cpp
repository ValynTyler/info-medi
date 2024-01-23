
#include <iostream>

using namespace std;

int sum_div(int n) {

    int s = 1 + n;
    int i = 1;

    for (int i = 2; i * 2 <= n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }

    return s;
}

bool p_num(int n) {
    return n % 2 == sum_div(n) % 2;
}

int kpn(int a, int b, int k) {
    for (int i = a; i <= b; i++) {
        if (p_num(i)) {
            k--;
        }
        if (k <= 0) {
            return i;
        }
    }
    return -1;
}

int main() {

    int a, b, k;
    // cin >> a >> b >> k;

    cout << kpn(27, 50, 6);;
  
    return 0;
}
