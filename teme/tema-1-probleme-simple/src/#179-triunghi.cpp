#include <iostream>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    bool is_triangle = 
        0 < a &&
        0 < b &&
        0 < c &&
        a + b > c &&
        a + c > b &&
        b + c > a
    ;


    if (is_triangle) {
        cout << "da";
    }
    else {
        cout << "nu";
    }


    return 0;
}
