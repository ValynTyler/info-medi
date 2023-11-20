#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    long long maxp = -1;

    // algoritmul nu scoate factori non-primi, 
    // asa ca nu trebuie verificata primalitatea
    for (long long d = 2; d * d <= n; d++) {

        while (n % d == 0) {
            n /= d;

            if (maxp < d) {
                maxp = d;
            }
        }
    }

    // n poate contine ultimul factor al n-ului original, asa ca
    // daca nu este 1, trebuie luat ca cel mai mare factor prim
    if (n != 1)
    {
        maxp = n;
    }
    

    cout << maxp;

    return 0;
}
