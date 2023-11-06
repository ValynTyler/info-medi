#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
    
    int rest = 0;

    while (b)
    {   
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}


int main() {
    
    int a, b;
    cin >> a >> b;
    
    cout << cmmdc(a, b);

    return 0;
}
