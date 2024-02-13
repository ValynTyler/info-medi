#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int a[1000];

int main() {

    int p1, p2, p3;
    fin >> p1 >> p2 >> p3;

    int x;
    while (fin >> x) {
        a[x]++;
    }

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int i, j, k;
    for (i = 1000; i >= 10; i--) {
        if (a[i] >= p1) {
            c1 = i;
            break;
        }
    }
    for (j = i - 1; j >= 10; j--) {
        if (a[j] >= p2) {
            c2 = j;  
            break;
        }
    }
    for (k = j - 1; k >= 10; k--) {
        if (a[k] >= p3) {
            c3 = k;  
            break;
        }
    }

    if (c3 != 0) {
        cout << c1 << " " << c2 << " " << c3;
    } else {
        cout << "nu exista";
    }

    return 0;
}
