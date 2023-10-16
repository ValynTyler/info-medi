#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;


    // sum
    int s = 0;
    int auxn = n;

    while (auxn) {
        s += auxn % 10;
        auxn /= 10;
    }


    int total = 0;
    while (n) {
        if ((s - n % 10) % 3 == 0) {
            ++total;
        }
        n /= 10;
    }

    cout << total;

    return 0;
}
