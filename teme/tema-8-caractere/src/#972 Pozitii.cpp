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

    void rezolvare() {
        char a = cin.get();
        char b = cin.get();
        char c = cin.get();
        int cnt = 0;
        while (c != '\n' && c != -1) {
            if (e_vocala(b) && e_cons(a) && e_cons(c)) {
                cnt++;
            }
            a = b;
            b = c;
            c = cin.get();
        }
        cout << cnt;
    }
}

int main() {
    caractere::rezolvare();
    return 0;
}
