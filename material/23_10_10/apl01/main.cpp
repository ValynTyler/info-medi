#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x=12345678.249;
    cout<<fixed<<setprecision(2)<<(int)(x*100)/100.0;
    return 0;
}
