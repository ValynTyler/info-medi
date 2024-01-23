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
#include <cmath>

using namespace std;

int print_fibo(int index, int _a = 0, int _b = 1) {

    cout << _a << " ";

    if (abs(_b) >= index) {
        if (abs(_b) == index) {
            cout << _b << " ";
        }

        return _b;
    }

    return print_fibo(index, _b, _a + _b);
}


int main() {

    int a;
    int b;
    cin >> a >> b;

    int n;
    cin >> n;

    print_fibo(n, a, b);

    return 0;
}
