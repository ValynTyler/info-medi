#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("secv.in");

long long NrSecvS(int a[], int n, int S) {

    int cnt = 0;

    for (int j = 0; j < n; j++) {
        int s = 0;
        for (int i = j; i < n; i++) {
            s += a[i];
            if (s > S) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() {

    int n;
    fin >> n;

    int s;
    fin >> s;

    int a[50];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    cout << NrSecvS(a, n, s);

    return 0;
}
