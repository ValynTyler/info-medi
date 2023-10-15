/*

D(a, a', c)
D(b, b', c)

a'c == b'c

<a == <b == 90deg

->
a'c^2 == a'a^2 + ac^2
b'c^2 == b'b^2 + bc^2

->
a'c*a'c == ha*ha + x*x
b'c*b'c == hb*hb + (d-x)*(d-x)
a'c*a'c == b'c*b'c

-> ha*ha + x*x == hb*hb + (d-x)*(d-x) == a'c*a'c == b'c*b'c

-> ha*ha + x*x == hb*hb + (d-x)*(d-x)

-> x*x + (d-x)*(d-x) == hb*hb - ha*ha

-> x*x + (d*d -dx -xd +x*x) == hb*hb - ha*ha

-> x*x + (d*d - 2dx + x*x) == hb*hb - ha*ha

-> x*x + x*x + d*d - 2dx == hb*hb - ha*ha

-> 2*x*x - 2dx == hb*hb - ha*ha - d*d

-> 2x^2 - 2dx - (hb*hb - ha*ha - d*d) == 0

->

*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int ha, hb, d;
    cin >> ha >> hb >> d;


    int x = int(sqrt(abs(hb*hb - ha*ha)) + d) / 2;
    cout << x;

    return 0;
}
