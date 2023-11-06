/*
    O cutie cu bomboane costă B lei. Gigel are S lei.
    Determinați câte cutii cu bomboane poate cumpăra Gigel
    și câți lei trebuie să mai primească pentru a cumpăra încă o cutie.
*/

#include <iostream>

using namespace std;

int main() {

    int B, S;
    cin >> B >> S;

    int C = S / B;
    int P = B - S % B;

    cout << C << ' ' << P;

    return 0;
}
