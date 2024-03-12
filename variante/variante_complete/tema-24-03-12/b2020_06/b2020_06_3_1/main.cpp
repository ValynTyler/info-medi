#include <iostream>

using namespace std;

int suma(int a, int b) {
    int s = 0;
    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int d = 0; d <= a; d++) {
        if (a % d == 0 &&
            b % d == 0
        ) {
            s += d;
        }
    }
    return s;
}

int main() {
    
    return 0;
}
