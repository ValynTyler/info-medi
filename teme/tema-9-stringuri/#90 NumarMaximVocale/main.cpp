#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

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

    int nr_maxim = -1;
    char lin_max[250];

    int n;
    fin >> n;
    char prop[250];
    for (int i = 0; i < n; i++) {
        fin.getline(prop, 251);
        int cnt = 0;
        for (int j = 0; j < strlen(prop); j++) {
            if (is_vocala(prop[j])) {
                cnt++;
            }
        }
        if (cnt > nr_maxim) {
            nr_maxim = cnt;
            strcpy(lin_max, prop);
        }
    }

    fout << lin_max;

    return 0;
}
