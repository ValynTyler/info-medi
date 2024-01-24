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

bool econsoana(char c) {
    return !is_vocala(c) && is_litera(c);
}

int main() {

    char cuv[10];
    cin.get(cuv, 11);

    char* apv;
    char* auc;

    for (int i = 0; i < strlen(cuv); i++) {
        if (is_vocala(cuv[i])) {
            apv = &cuv[i];
            break;
        }
    }

    for(int i = strlen(cuv)-1; i >= 0; i--) {
        if (econsoana(cuv[i])) {
            auc = &cuv[i];
            break;
        }
    }

    char aux = *apv;
    *apv = *auc;
    *auc=  aux;

    cout << cuv;

    return 0;
}
