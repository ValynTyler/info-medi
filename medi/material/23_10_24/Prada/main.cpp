#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ha,hb,d,x;
    cin>>ha>>hb>>d;
    if(ha<hb)swap(ha,hb);
    x=abs((hb*hb-ha*ha+d*d)/(2*d));
    cout<<x;
    return 0;
}
