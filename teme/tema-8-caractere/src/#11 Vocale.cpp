#include <iostream>

using namespace std;

namespace caractere {

    const char VOCALE[6] = { 'a', 'e', 'i', 'o', 'u' };

    bool e_vocala(char c) {
        for (int i = 0; i < 6;i++) {
            if (c == VOCALE[i]) {
                return true;
            }
        }
        return false;
    }

    bool e_cons(char c) {
        return !e_vocala(c) && c <= 122 && c >= 97;
    }

    char litera_mare(char c) {
        return c + 'A' - 'a';
    }

    void rezolvare() {
        char c = cin.get();
        char out[21];
        int indice = 0;
        while (c != -1 && c != '\n') {
            out[indice] = e_vocala(c) ? litera_mare(c) : c;
            indice++;
            c = cin.get();
        }
        cout << out;
    }
}

int main() {
    caractere::rezolvare();
    return 0;
}
