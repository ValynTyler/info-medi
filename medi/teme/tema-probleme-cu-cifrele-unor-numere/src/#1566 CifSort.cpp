#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int newn = 0;
    int p = 1;
    while (n) {

        newn = (newn + 9) * 100;
        
        
        n /= 100;
    }

    cout << newn;

    return 0;
}
