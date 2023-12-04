#include <iostream>

using namespace std;

namespace caractere {

    const char VOCALE[6] = { 'a', 'e', 'i', 'o', 'u' };

    bool e_vocala(char c) {
        for (int i = 0; i < 6; i++) {
            if (c == VOCALE[i]) {
                return true;
            }
        }
        return false;
    }

    bool e_cons(char c) {
        return !e_vocala(c) && c <= 'z' && c >= 'a';
    }

    bool e_brr() {
        char c = cin.get();
        bool ok = false;
        while (c != '\n' && c != -1) {
            if (e_cons(c)) {
                ok = true;
            }

            if (e_vocala(c) && c != 'i') {
                return false;
            }
            c = cin.get();
        }
        return ok;
    }

    void rezolvare() {
        cout << (e_brr() ? "DA" : "NU");
    }
}

int main() {
    caractere::rezolvare();
    return 0;
}
