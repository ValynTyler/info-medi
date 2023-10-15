#include <iostream>

using namespace std;

bool is_an_bisect(int an) {
    return ((an % 4 == 0) && (an % 100) != 0) || an % 400 == 0;
}

int main() {

    int an;
    cin >> an;

    bool bisect = is_an_bisect(an);

    if (bisect) {
        cout << "bisect";
    }
    else {
        cout << "nebisect";
    }

    return 0;
}
