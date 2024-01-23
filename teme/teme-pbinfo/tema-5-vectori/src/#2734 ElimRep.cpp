#include <iostream>

using namespace std;

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
        for (int j = i + 1; j < n; j++) {
            if (v[j] == v[i]) {
                stergere(v, j, n);
                i--;
            }
        }
    }

    afis(v, n);

    return 0;
}
