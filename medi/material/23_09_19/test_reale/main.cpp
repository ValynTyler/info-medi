#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<12.34<<"\n";
    cout<<12.3456<<"\n";
    cout<<12.34567<<"\n";
    cout<<12345678.0<<"\n"; ///1.23457e+07 = 1.23457*10^7 = 12345700
    cout<<fixed<<setprecision(7)<<12.34567<<"\n";
    cout<<fixed<<setprecision(2)<<12.5<<"\n";
    double x=5.789;
    cout<<fixed<<setprecision(2)<<x<<"\n";
    cout<<fixed<<setprecision(2)<<(int)(x*100)/100.0<<"\n";
    return 0;
}
