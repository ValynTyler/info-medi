#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x;
    int y;

    cin >> x >> y;
    if (x == 0) {
        cout << 0;
        return 0;
    }

    int cnt = 0;

    while (y) {
        
        if (abs(y % 10) == abs(x % 10)) {
            cnt++;
        }

        x = y;
        cin >> y;
    }

    cout << cnt;

    return 0;
}
