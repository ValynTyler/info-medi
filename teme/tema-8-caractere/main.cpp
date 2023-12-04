#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main() {
    char a;
    fin >> a;
    fout << a;
    cout << a;
    return 0;
}
