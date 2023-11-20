/*
Sn = [(ak + a1) * k]/2

k - nr pasi
*/

#include <iostream>

using namespace std;

int main() {
    
    long long n; // impar
    cin >> n;

    long long k = (n + 1) / 2;
    
    long long S = ((n + 1) * k) / 2;

    cout << S;

    return 0;
}
