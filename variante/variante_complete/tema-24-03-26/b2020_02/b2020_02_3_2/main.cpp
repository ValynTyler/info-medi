#include <iostream>
#include <cstring>

using namespace std;

char to_upper(char& c) {
    if (c >= 'a' && c <= 'z') {
        c += 'A' - 'a';
    }
    return c;
}

int main() {
    char text[101];
    cin.getline(text, 101);

    bool citat = false;

    for (int i = 0; i <= strlen(text); i++) {
        if (text[i] == '<') {
            citat = true;
        } else if (text[i] == '>') {
            citat = false;
        }
        
        if (citat) {
            to_upper(text[i]);
        }
    }

    cout << text;

    return 0;
}
