#include <iostream>
using namespace std;

int main()
{
    ///transformăm totul în minute, facem adunare, și apoi transformăm la loc
    ///în ore și minute
    int h1,m1,x,y,rez,hrez,mrez;
    cin>>h1>>m1>>x>>y;
    rez=h1*60+m1+x*60+y;
    hrez=(rez/60)%24;
    mrez=rez%60;
    cout<<hrez<<" "<<mrez;
    return 0;
}
