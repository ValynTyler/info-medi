#include <iostream>
using namespace std;

int n, m;
int a[21][21];

int main() {

    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int max = -1;
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < n - 1; j++) {
            int current = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
            if (current > max)
                max = current;
        }
    cout << max;
    return 0;
}
