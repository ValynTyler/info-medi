#include <iostream>
using namespace std;

void Impare(int& n) {
    int rez = 0;
    int p = 1;
    while (n) {
        int c = n % 10;
        if (c % 2 == 1) {
            c -= 1;
        }
        rez += c * p;
        p *= 10;
        n /= 10;
    }
    n = rez;
}

int main() {

    int n = 15690;
    Impare(n);
    cout << n;

    return 0;
}
