#include <iostream>
#include <cmath>

using namespace std;

int multiplu(int n) {
    int s = n;
    while(true) {
        if ((int)sqrt(s) * (int)sqrt(s) == s) {
            return s;            
        }

        s += n;
    }
}

int main() {

    cout << multiplu(13);
  
    return 0;
}
