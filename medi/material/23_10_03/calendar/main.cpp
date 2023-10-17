#include <iostream>
using namespace std;

int main()
{
    int z,l,a,nzl=31;
    cin>>z>>l>>a;
    if(l==2)
        if(a%400==0 || a%4==0 && a%100!=0)///cond. de an bisect
            nzl=29;
        else
            nzl=28;
    else
        if(l==4||l==6||l==9||l==11)
            nzl=30;
    if(z==0||l==0||l>12||z>nzl)
            cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
