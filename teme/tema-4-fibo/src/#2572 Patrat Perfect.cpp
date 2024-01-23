#include <iostream>
#include <cmath>

using namespace std;

bool is_patr_perf(int n) {
    double root = pow(n, 0.5);
    return root == (int)root;
}

int main() {
    
    int n;
    cin >> n;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << (is_patr_perf(x) ? "DA" : "NU") << "\n";
    }

    return 0;
}
