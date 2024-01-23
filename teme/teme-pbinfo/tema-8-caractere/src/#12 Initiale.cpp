#include <iostream>

using namespace std;

namespace caractere {

    const char VOCALE[6] = { 'a', 'e', 'i', 'o', 'u' };

    char litera_mare(char c) {
        return c + 'A' - 'a';
    }

    void rezolvare() {
        char a, b, c;
        a = cin.get();
        b = cin.get();
        c = cin.get();
        char out[256];
        out[0] = litera_mare(a);
        int indice = 1;
        while (c != -1 && c != '\n') {
            out[indice] = ((a == ' ' || c == ' ') && b != ' ') ? litera_mare(b) : b;
            indice++;
            a = b;
            b = c;
            c = cin.get();
            if (c == -1 || c == '\n')
            {
                out[indice] = litera_mare(b);
            }
        }
        cout << out;
    }
}

int main() {
    caractere::rezolvare();
    return 0;
}
