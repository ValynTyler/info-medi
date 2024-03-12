#include <iostream>
#include <cstring>

using namespace std;

// un palc mic de scolarite ilumina sala

int main() {

    char text[101];
    cin.getline(text, 101);
    
    char outp[101] = "";
    char* p = strtok(text, " ");

    while (p) {
        int len = strlen(p);
        if (len > 2) {
            char c = p[0];
            for (int i = 0; i < len-1; i++) {
                p[i] = p[i + 1];
            }
            p[len-1] = c;
        }
        strcat(outp, p);
        strcat(outp, " ");
        p = strtok(NULL, " ");
    }
    cout << outp;

    return 0;
}
