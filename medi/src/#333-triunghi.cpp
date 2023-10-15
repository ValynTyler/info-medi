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
        double ip;
        double c1;
        double c2;

        if (a > b && a > c) {
            ip = a;
            c1 = b;
            c2 = c;
        }
        else if (b > c) {
            ip = b;
            c1 = a;
            c2 = c;
        }
        else {
            ip = c;
            c1 = a;
            c2 = b;
        }



        if (ip * ip == c1 * c1 + c2 * c2) {
            cout << "triunghi dreptunghic";
        }
        else if (ip * ip > c1 * c1 + c2 * c2) {
            cout << "triunghui obtuzunghic";
        }
        else if (ip * ip < c1 * c1 + c2 * c2) {
            cout << "triunghi ascutitunghic";
        }
    }
    else {
        cout << "nu este triunghi";
    }


    return 0;
}
