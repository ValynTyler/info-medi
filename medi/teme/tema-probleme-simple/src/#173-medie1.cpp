#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(2) << int(float(a + b + c) / 3 * 100) / 100.00;


    return 0;
}
