#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    float AB, BC, CD, AD;
    cin >> AB >> BC >> CD >> AD;


    float h = sqrt(AD*AD - (((BC - AB + CD) / 2) * ((BC - AB + CD) / 2)));


    float A = 0.5 * (AB + CD) * h;

    // cout << fixed << setprecision(2) << A;

    cout << h;
    
    return 0;
}
