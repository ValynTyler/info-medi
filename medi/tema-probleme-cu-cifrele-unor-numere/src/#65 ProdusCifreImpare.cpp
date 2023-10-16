#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int p = 1;
    bool flag = false;
    while (n) {
        if (n % 2 != 0) {
            flag = true;
            p *= n % 10;
        }   
        n /= 10;
    }

    cout << (!flag ? -1 : p);

    return 0;
}
