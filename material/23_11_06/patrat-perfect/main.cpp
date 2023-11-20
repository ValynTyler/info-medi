#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(sqrt(a)==(int)sqrt(a))
            cout<<"DA"<<'\n';
        else
            cout<<"NU"<<'\n';
    }
    return 0;
}
