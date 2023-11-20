#include <iostream>

using namespace std;

void citire(int* vec, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}

void get_min_max(int* vec, int n, int& min, int& max) {

    min = 100000 + 1;
    max = -1;

    for (int i = 0; i < n; i++) {
        if (vec[i] > max) {
            max = vec[i];
        }

        if (vec[i] < min) {
            min = vec[i];
        }
    }
}

void afis(int* vec, int n, int min, int max) {

    bool show = false;

    for (int i = 0; i < n; i++) {

        if (vec[i] == min || vec[i] == max) {
            show = !show;
            if (show == false) {
                cout << vec[i] << " ";
            }
        }

        if (show) {
            cout << vec[i] << " ";
        }
    }
}

int main() {

    int n, vec[1001];
    cin >> n;

    int min, max;

    citire(vec, n);
    get_min_max(vec, n, min, max);
    afis(vec, n, min, max);

    return 0;
}
