#include <iostream>

using namespace std;

bool is_an_bisect(int an) {
    return ((an % 4 == 0) && (an % 100) != 0) || an % 400 == 0;
}

bool is_data_calendaristica(int z, int l, int a) {

    if (l > 12) {
        return false;
    }
    if (z > 31) {
        return false;
    }
    if (z > 30 && (l == 4 || l == 6 || l == 9 || l == 11)) {
        return false;
    }
    if (l == 2) {
        if (z > 29) {
            return false;
        }
        if (z > 28 && !is_an_bisect(a)) {
            return false;
        }
    }
    return true;
}

int main() {

    int z, l, a;
    cin >> z >> l >> a;

    if (is_data_calendaristica(z + 1, l, a)) {
        cout << z + 1 << " " << l << " " << a;
    }
    else if (is_data_calendaristica(1, l + 1, a)) {
        cout << 1 << " " << l + 1 << " " << a;
    }
    else if (is_data_calendaristica(1, 1, a + 1)) {
        cout << 1 << " " << 1 << " " << a + 1;
    }


    return 0;
}
