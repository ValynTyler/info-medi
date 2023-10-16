#include <iostream>

using namespace std;

int oglindit(int n) {
    int ogl = 0;
    while (n) {
        ogl = n % 10 + ogl * 10;
        n /= 10;
    }
    return ogl;
}

int main() {

    int n;
    cin >> n;

    cout << oglindit(n);

    return 0;
}
