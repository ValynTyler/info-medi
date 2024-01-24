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

    char text[100];
    char dest[250] = "";
    cin.getline(text, 101);

    int j = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        dest[j++] = text[i];
        if (is_vocala(text[i])) {
            dest[j++] = '*';
        }
    }

    cout << dest;

    return 0;
}
