#include <iostream>
#include <iomanip>

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

    int n, nr;
    cin >> nr;
    
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < nr; i++)
    {
        cin >> n;
        if (is_prime(n))
        {
            sum += n;
            cnt += 1;
        }
    }
    
    cout << fixed << setprecision(2) << ((int)((float)sum / cnt * 100) / 100.00);

    return 0;
}
