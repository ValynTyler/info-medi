#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int ap[1000];

int main() {
    
    int prem1;
    int prem2;
    int prem3;

    fin >> prem1;
    fin >> prem2;
    fin >> prem3;

    int x;
    while(fin >> x) {
        ap[x]++;
    }

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 999; i >= 0; i--) {
        if (ap[i] >= prem1 && i > c1) {
            c1 = i;
        }
        else if (ap[i] >= prem2 && i > c2) {
            c2 = i;
        }
        else if (ap[i] >= prem3 && i > c3) {
            c3 = i;
        }
    }

    cout << " " << c1 << " " << c2 << " " << c3;

    return 0;
}
