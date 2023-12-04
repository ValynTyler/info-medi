#include <iostream>

using namespace std;

bool e_majuscula(char c) {
    return c >= 'A' && c <= 'Z';
}

void rezolvare() {
    char b, c;
    b = ' ';
    c = cin.get();
    char rez[100];
    int i = 0;
    while (c != '\n' && c != -1) {
        if (e_majuscula(c) && b == ' ') {
            rez[i] = c;
            i++;
        }
        b = c;
        c = cin.get();
    }
    
    for (int j = 0; j < i; j++) {
        cout << rez[j];
    }
}

int main() {
    rezolvare();
    return 0;
}
