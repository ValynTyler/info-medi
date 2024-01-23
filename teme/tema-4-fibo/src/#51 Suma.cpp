#include <iostream>

using namespace std;

int main() {
    
    int n, s = 0;
    do {
        cin >> n;
        s += n;
    }while(n);

    cout << s;

    return 0;
}
