#include <iostream>
#include <cstring>

using namespace std;

const char VOCALE[] = {
    'a', 'e', 'i', 'o', 'u'
};

bool is_vocala(char c) {
    for (int i = 0; i <= 6; i++) {
        if (VOCALE[i] == c) {
            return true;
        }
    }
    return false;
}

void is_vocala_test() {
    for (int i = 0; i < 26; i++) {
        char c = i + 'a';
        cout << c << " " << is_vocala(c) << '\n';
    }
}

char vocala_prietena(char cons) {
    if (is_vocala(cons)) {
        return cons;
    }

    for (int i = 4; i > 0; i--) {
        if ((int)cons > (int)VOCALE[i]) {
            return VOCALE[i];
        }
    }

    return 'a';
}

void vocala_prietena_test() {
    for (int i = 0; i < 26; i++) {
        char c = i + 'a';
        cout << c << " " << vocala_prietena(c) << '\n';
    }
}

int main() {

    char cuvant[51];
    cin.get(cuvant, 52);

    int len = strlen(cuvant);
    for (int i = 0; i < len; i++) {
        cout << vocala_prietena(cuvant[i]);
    }

    return 0;
}
