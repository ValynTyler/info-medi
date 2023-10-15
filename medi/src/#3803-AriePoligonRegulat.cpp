
#include <iostream>
#include <iomanip>
#include <cmath>

# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

int main() {
    
    int n; // number of edges
    float l; // length of edge
    cin >> n >> l;





    float A = ((n * l*l) / (4 * tan(M_PI/n)));

    cout << fixed << setprecision(2) << (int)A * 100 / 100.00;


    return 0;
}
