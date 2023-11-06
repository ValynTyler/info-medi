#include <iostream>

using namespace std;

int main() {
    
    int n;
    int s = 0;
    do {
        cin >> n;
        s += n % 2 == 0 ? n : 0;
    }while(n);

    cout << s;

    return 0;
}
