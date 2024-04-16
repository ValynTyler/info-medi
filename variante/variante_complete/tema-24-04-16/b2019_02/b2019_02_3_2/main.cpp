#include <iostream>

using namespace std;

int a[21][21];

void citire(int n, int a[][21]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

int rezolvare(int n, int a[][21]) {
    int fix = a[0][0];
    int dim = 1;
    for (dim; dim < n; dim++) {
        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                if (a[i][j] != fix) {
                    return dim - 1;
                }
            }
        }
    }
    return dim;
}

/*
5
2 2 2 2 2 
2 2 2 2 8 
2 2 2 2 2 
2 1 2 8 7 
3 5 2 1 2

5
2 2 0 2 2 
2 2 2 2 8 
2 2 2 2 2 
2 1 2 8 7 
3 5 2 1 2
*/

int main() {
    int n;
    cin >> n;

    citire(n, a);
    cout << rezolvare(n, a);

    return 0;
}
