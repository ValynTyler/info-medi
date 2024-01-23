#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("expo.in");

int expof2(int n) {

    int p = 1;
    int i = 0;

    while (p * 2 <= n) {
        p *= 2;
        i++;
    }

    return i;
}

void f_expo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = expof2(a[i]);
    }
}

int main() {

    int n;
    int a[50];

    fin >> n;

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    f_expo(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
