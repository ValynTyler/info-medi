#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int x;
    int y;
    int z;

    int s = 0;

    cin >> x >> y;
    for (int i = 3; i <= n; i++) {
        cin >> z;

        if (y > x && y > z) {
            s += y;
        }


        x = y;
        y = z;
    }

    cout << s;

    return 0;
}
