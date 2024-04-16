#include <iostream>

using namespace std;
int MaxImp(int a, int b) {
    for (int i = b; i >= a; i--) {
        int p = 1;
        for (int d = 1; d * 2 <= i; d += 2) {
            if (i % d == 0) {
                p *= d;
            }
        }
        if (p > i) {
            return i;
        }
    }
    return 0;
}


int main() {
    cout << MaxImp(14, 19);
  
    return 0;
}
