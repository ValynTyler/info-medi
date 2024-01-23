
#include <iostream>

using namespace std;

int det(int n) {
    
    int p = 1;
    int i = 1;
    
    while(p * i <= n) {
        p *= i;
        i++;
    }

    if (abs(n - p) <= abs(n - p * i)) {
        return p;
    }
    else {
        return p * i;
    }
}

int main() {
    cout << det(72);
  
    return 0;
}
