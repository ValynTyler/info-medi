#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char s[10];
    cin.get(s, 11);

    char copy[10];
    strcpy(copy, s);

    while (copy[0]) {
        cout << copy << '\n';
        copy[strlen(copy)-1] = 0;
    }

    int len = strlen(s);
    for (int i = 0 ; i < len; i++) {
        cout << s + i << '\n';
    }
    
    return 0;
}
