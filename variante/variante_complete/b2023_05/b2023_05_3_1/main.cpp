#include <iostream>

using namespace std;

int sum_div(int n) {
    int s = 0;
    for (int d = 1; d <= n; d++) {
        if (n % d == 0) {
            s += d;
        }
    }
    return s;
}

bool abundent(int n) {
    for (int k = 1; k < n; k++) {
        if (sum_div(n) / n <= sum_div(k) / k) {
            return false;
        }
    }
    return true;
}

int main() {
    
    cout << abundent(8);

    return 0;
}
