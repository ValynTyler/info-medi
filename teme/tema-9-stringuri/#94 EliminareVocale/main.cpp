#include <iostream>
#include <cstring>

using namespace std;

bool is_litera(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    return false;
}

bool is_vocala(char c) {
    if (!is_litera(c)) {
        return false;
    }

    if (
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
    ) {
        return true;
    }

    return false;
}

int main() {

    char sir[20];
    cin.get(sir, 21);

    int len = strlen(sir);
    for(int i = 0; i < len; i++) {
        if (is_vocala(sir[i])) {
            strcpy(sir + i, sir + 1 + i);
            i--;
        }
    }

    cout << sir;

    return 0;
}
