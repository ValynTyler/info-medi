#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("num.in");

int sum_cif(int n) {

    int s = 0;

    while (n) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

bool sum_cif_egal(int a, int b) {
    return sum_cif(a) == sum_cif(b);
}

int DouaNumere(int a[], int n) {
    int s = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sum_cif_egal(a[i], a[j])) {
                int temp_s = a[i] + a[j];
                if (temp_s > s) {
                    s = temp_s;
                }
            }
        }
    }
    return s;
}

int main() {

    int n;
    fin >> n;

    int a[50];
    for(int i = 0; i < n; i++) {
        fin >> a[i];
    }

    cout << DouaNumere(a, n);

    return 0;
}
