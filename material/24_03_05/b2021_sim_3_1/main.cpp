#include <iostream>
using namespace std;

int putere(int n)
{///facem descompunere în factori primi. Reținem puterea minimă cu tot cu factorul
    ///care o dă
    int d=2,p,pmin=100,dmin;
    while(d*d<=n)
    {
        p=0;
        while(n%d==0)
        {
            n/=d;
            p++;
        }
        if(p!=0 && p<pmin)
        {
            pmin=p;
            dmin=d;
        }
        d++;
    }
    if(n>1 && 1<pmin)///deci a mai rămas factorul n la puterea 1
                dmin=n;///iar acest 1 bate toate minimele până la cel curent
    return dmin;
}

int main()
{
    cout << putere(4948);
    return 0;
}
