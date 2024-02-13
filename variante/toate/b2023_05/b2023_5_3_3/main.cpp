#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int ap_suf[100];
int ap_pref[100];

int main() {
    
    int x;
    while (fin >> x) {
        if (x < 100) {
            continue;
        }

        int sf = x % 100;
        while(x > 100) {
            x /= 10;
        }
        int pf = x;

        ap_suf[sf]++;
        ap_pref[pf]++;
    }

    for (int i = 10; i < 100; i++) {
        if (ap_suf[i] == ap_pref[i] && ap_suf[i] != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
