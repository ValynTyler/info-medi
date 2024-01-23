#include <iostream>

using namespace std;

int main() {

    int last;
    cin >> last;

    int x;
    cin >> x;

    int sum = x + last;

    while(x != last) {
        last = x;
        cin >> x;

        sum += x;
    }

    cout << sum;

    return 0;
}
