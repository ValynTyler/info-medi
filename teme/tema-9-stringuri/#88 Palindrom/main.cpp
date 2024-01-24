#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fi("palindrom.in");
ofstream fo("palindrom.out");

bool is_palindrom(char cuv[]) {
    int len = strlen(cuv);
    for (int i = 0; i * 2 < len; i++) {
        if (cuv[i] != cuv[len-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    fi >> n;

    for (int i = 0; i < n; i++) {
        char cuv[50];
        fi >> cuv;
        fo << is_palindrom(cuv) << '\n';
    }
  
    return 0;
}
