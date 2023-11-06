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

int sum_fibo(int index, int _a = 0, int _b = 1) {

    if (abs(_b) >= index) {

        return _b;
    }

    return sum_fibo(index, _b, _a + _b);
}

bool verif_fibo(int x) {
    return sum_fibo(x) == x;
}


int main() {

    int n;
    cin >> n;



    return 0;
}
