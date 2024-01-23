/*
(
(3(a*a + a*a*a*a))
        /
(a*a + a*a*a*a + sqrt(a*a + a*a*a*a))
)

+

sqrt(a*a + a*a*a*a)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a;
    cin >> a;

    int asq = a*a;
    int ahc = a*a*a*a;

    int rezult = 
    (
        (
            (3 * (asq + ahc))
                    / 
            (asq + ahc + sqrt(asq + ahc))
        )
            + 
        sqrt(asq + ahc)
    );

    cout << rezult;

    return 0;
}
