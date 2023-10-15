#include <iostream>

using namespace std;

int main() {

    int mx = -1, my = -1, mz = -1;

    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        if (n > mx) {
            
            if (n > my) {
             
                if (n > mz) {
                    mz = n;
                }
             
                else {
                    my = n;
                }

            }
            
            else {
                mx = n;
            }
        }
    }

    cout << mx + my + mz;

    return 0;
}
