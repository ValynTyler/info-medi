#include <iostream>

using namespace std;

int a[101][101];

int main() {
    int k, n;
    cin >> k >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = k * (i + 1) + j - i;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
