#include <iostream>

using namespace std;

bool is_s_num_cons(int a, int b) {

    if (a < b) {
        return false;
    }



    return true;
}



int main() {

    int a, b;
    cin >> a >> b;

    cout << (is_s_num_cons(a, b) ? "DA" : "NU");

    return 0;
}
