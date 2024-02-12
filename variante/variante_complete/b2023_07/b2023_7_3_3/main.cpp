#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int frecv_a[100], frecv_b[100];

int min(int a, int b) {
    return a > b ? b : a;
}

int main() {
    
    int m, n;
    fin >> m >> n;
    for (int i = 0; i < m; i++) {
        int x;
        fin >> x;
        frecv_a[x]++;
    }
    for (int j = 0; j < n; j++) {
        int y;
        fin >> y;
        frecv_b[y]++;
    }

    int s = 0;

    for (int k = 0; k < 101; k++) {
        s += min(frecv_a[k], frecv_b[k]);
    }

    cout << s;

    // Rezolvarea cea mai eficienta

    return 0;
}

/*
Literatură:
-----------

(see medi::23.01.2024)

*/
