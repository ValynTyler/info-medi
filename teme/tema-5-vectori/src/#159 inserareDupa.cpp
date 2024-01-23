#include <iostream>

using namespace std;

void inserare(int* v, int index, int& n, int value) {
    n++;
    for (int i = n - 1; i > index; i--) {
        v[i] = v[i - 1];
    }
    v[index] = value;
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
        if (v[i] % 2 == 0) {
            inserare(v, i + 1, n, v[i] * 2);
            i++;
        }
    }

    afis(v, n);

    return 0;
}
