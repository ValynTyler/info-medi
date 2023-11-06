/*
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {


    double a, b, c, d;
    cin >> a >> b >> c >> d;
    // a || c
    if(a==c)///vezi formula de mai jos: dacă a==c se face împărțire la 0 și funcționează aiurea
        cout<<"Imposibil";
    else
    {
        double x = (d*d-b*b+c*c+a*a-2*a*c)/(2*c-2*a);
        if(d*d-x*x<=0||a==c)
            cout<<"Imposibil";
        else
            {
                double h=sqrt(d*d-x*x);
                double aria=(a+c)*h/2;
                cout<<fixed<<setprecision(2)<<(long long)(aria*100)/100.0;
            }
    }
    return 0;
}
