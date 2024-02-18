#include <iostream>

using namespace std;

int main() {
    
    int ns; // linie
    int np; // col
    int tab[1001][51];

    cin >> ns >> np;

    for (int i = 0; i < ns; i++) {
        for (int j = 0; j < np; j++) {
            cin >> tab[i][j];
        }
    }

    
    for (int i = 0; i < ns; i++) {
        int limax = -1;
        int lindex = 0;
        for (int j = 0; j < np; j++) {
            if (tab[i][j] > limax) {
                limax = tab[i][j];
                lindex = j;
            }
        }
        // cout << tab[i][lindex] << endl;
        cout << (i+1) << ':' << (lindex+1) << ' ';
    }

    return 0;
}
