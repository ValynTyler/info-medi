#include <iostream>

using namespace std;

int main() {

    int n, c1, c2;
    cin >> n >> c1 >> c2;

    int p = 1;
    int newn = 0;

    do {

        int lcif = n % 10;
        if (lcif == c1) {
            lcif = c2;
        }

        newn = newn + lcif * p;

        p *= 10;
        n /= 10;
    } while (n);

    cout << newn;

    return 0;
}
