#include <iostream>

using namespace std;

long long cmmdc(long long a, long long b) {
    
    long long rest = 0;

    while (b)
    {   
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}


int main() {
    
    long long a, b;
    cin >> a >> b;
    
    cout << (a + b == 0 ? -1 : cmmdc(a, b));

    return 0;
}
