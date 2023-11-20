#include <iostream>

using namespace std;

void schimb(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void cres(int& a, int& b, int& c) {
    if (a > c) {
        schimb(a, c);
    }

    if (a > b) {
        schimb(a, b);
    }

    if (b > c) {
        schimb(b, c);
    }
}

bool is_triunghi(int a, int b, int c) {    
    return (a < b + c);
}

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

int main() {

    int n, v[101];

    cin >> n;
    citire(v, n);

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k < n; k++) {
                if(is_triunghi(v[i], v[j], v[k])) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
