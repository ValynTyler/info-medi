#include <iostream>

using namespace std;

bool is_prime(int n) {

    if (n < 2) {
        return false;
    }

    if (n == 2) {
        return true;
    }


    if (n % 2 == 0) {
        return false;
    }

    for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            return false;
        }
    }

    return true;
}


int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
