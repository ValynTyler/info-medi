/*
Sirul lui Fibonacci:
(0)
0
1
1
2
3
5
8
13
21
34
55
.
.
.
etc...
*/


#include <iostream>

using namespace std;

int get_fibo(int index, int _a = 0, int _b = 1) {

    if (_b >= index) {
        return _b;
    }

    return get_fibo(index, _b, _a + _b);
}


int main() {
    
    cout << get_fibo(8);

    return 0;
}
