#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int main() {
    int len_max = 0;
    int prv, crt, nxt;

    fin >> prv >> crt >> nxt;
    
    int len = 2;

    do {
        if (prv != crt && crt != nxt) {
            len += 1;
        } else {
            if (len > len_max) {
                len_max = len;
            }
            len = 2;
        }

        prv = crt;
        crt = nxt;
    } while (fin >> nxt);

    cout << len_max;

    return 0;
}
