#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    double n, l;
    cin >> n >> l;

    if (n == 4) {
        cout << setprecision(3) << l * l;
    }
    else if (n == 3) {
        cout << setprecision(3) << l * l * sqrt(3) / 4;
    }
    else if (n == 6) {
        cout << setprecision(3) << 3 * l * l * sqrt(3) / 2;
    }




    return 0;
}
