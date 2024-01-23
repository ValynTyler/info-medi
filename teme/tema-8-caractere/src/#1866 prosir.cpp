#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

void rezolvare() {
    char b, c;
    c = fin.get();
    while (c != '.')
    {
        b = c;
        c = fin.get();
        fout << char((c == ' ' || c == '.') && b != ' ' ? '5' : b);
    }
    fout << '.';
}

int main() {
    rezolvare();
    return 0;
}
