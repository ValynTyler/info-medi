/*
Sirul lui Fibonacci:
-------------------
(0)
0   |0
1   |1
1   |2
2   |3
3   |4
5   |5
8   |6
13  |7
21  |8
34  |9
55  |10
.
.
.
etc...
*/


#include <iostream>

using namespace std;

long long print_fibo(int amount, int index = 0, long long _a = 0, long long _b = 1) {

    if (amount < index) {
        return _b;
    }

    cout << _b << " ";
    return print_fibo(amount, index + 1, _b, _a + _b);
}


int main() {
    
    int n;
    cin >> n;

    print_fibo(n, 1);

    return 0;
}
