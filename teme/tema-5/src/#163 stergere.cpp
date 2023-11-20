#include <iostream>

using namespace std;

bool prim(int n) {
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

void stergere(int* v, int index, int& n) {
    for (int i = index; i < n - 1; i++) {
        v[i] = v[i + 1];
    }

    v[n - 1] = '\0';
    n--;
}

void citire(int* v, int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void afis(int* v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

int main() {

    int n, v[1001];

    citire(v, n);

    for (int i = 0; i < n; i++) {
        if (prim(v[i])) {
            stergere(v, i, n);
            i--;
        }
    }

    afis(v, n);

    return 0;
}
