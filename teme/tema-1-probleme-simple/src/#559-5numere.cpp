#include <iostream>

using namespace std;

int main() {

    int nums[5];

    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    for (int j = 0; j < 5; j++) {
     
        for (int i = 1; i < 5; i++) {
            
            if (nums[i - 1] > nums[i]) {
                // swap
                int aux = nums[i - 1];
                nums[i - 1] = nums[i];
                nums[i] = aux;
            }
        }
    }

    int s = nums[4] + nums[3] + nums[2];
    cout << s;

    return 0;
}
