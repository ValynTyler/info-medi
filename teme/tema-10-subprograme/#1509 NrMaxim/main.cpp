#include <iostream>

using namespace std;

int nrmaxim(int nr) {
    int max = -1;
    int len = 0;
    int pow = 1;

    int aux = nr;
    while (aux) {
        len += 1;
        pow *= 10;
        aux /= 10;
    }

    for (int i = 0; i < len; i++) {
        if (nr > max) {
            max = nr;
        }

        int ucf = nr % 10;
        int next = ucf * pow / 10 + nr / 10;
        nr = next;
    }

    return max;
}

int main() {
    cout << nrmaxim(7891) << endl;
    return 0;
}
