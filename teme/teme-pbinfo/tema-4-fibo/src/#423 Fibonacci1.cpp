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

long long print_fibo(int index, long long _a = 0, long long _b = 1) {

    cout << _a << " ";

    if (_b >= index) {
        if (_b == index) {
            cout << _b << " ";
        }

        return _b;
    }

    return print_fibo(index, _b, _a + _b);
}


int main() {

    int n;
    cin >> n;

    print_fibo(n, 1, 1);

    return 0;
}
