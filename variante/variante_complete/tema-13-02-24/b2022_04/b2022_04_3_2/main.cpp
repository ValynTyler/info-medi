#include <iostream>

using namespace std;

/*
20  30  80  52
71  93  64  51
62  81  55  49
90  65  32  22
*/

int n;
int a[1000][1000]; // ?**

void citire() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void afis() {
    cout << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    citire();
    afis();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            a[i][j] = a[i][j+1];
        }
    }

    afis();

    return 0;
}
