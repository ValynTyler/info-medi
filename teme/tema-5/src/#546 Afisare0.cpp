#include <iostream>

using namespace std;

int main() {

    int vec[1001];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int ult = vec[n - 1];

    for (int i = 0; i < n; i++) {

        if (vec[i] % ult== 0) {
            cout << vec[i] << " ";
        }
    }


    return 0;
}
