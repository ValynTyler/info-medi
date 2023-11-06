#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int s=0,d;
    for(d=1; d*d<x; d++)
        if(x%d==0)
        {
            if(d%2==0)
                s++;
            if(x/d%2==0)
                s++;
        }
    if(d*d==x && d%2==0)
        s++;
    cout<<s;
    return 0;
}
