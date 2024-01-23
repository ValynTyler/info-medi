#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int p = 1;
    int aux = 0;
    int rez = 0;

    while (n) {
        aux = n % 10 * 10 + n % 100 / 10;
        
        rez += aux * p;

        p = 100;
        n /= 100;
    }

    n = aux;


    cout << n;

    return 0;
}
