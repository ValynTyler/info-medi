#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int x;

    int imp1 = 0;
    int imp2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x % 2 == 1) {
            imp2 = imp1;
            imp1 = x;
        }
    }

    if (imp2) {
        cout << imp2 << " " << imp1;
    }
    else {
        cout << "Numere insuficiente";
    }

    return 0;
}
