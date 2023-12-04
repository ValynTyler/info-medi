#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main() {

    bool caps_on = false;
    char c = fin.get();

    while (c != -1 && c != '\n') {
        if (c == '#') {
            caps_on = !caps_on;
        }
        else {
            if (caps_on && c >= 'a' && c <= 'z') {
                c += 'A' - 'a';
            }

            fout << c;
        }

        c = fin.get();
    }

    return 0;
}
