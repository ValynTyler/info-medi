#include <iostream>

using namespace std;

int main()
{
    long long n,S=0;
    cin>>n;
    while(n>0)
    {
        S=S+n;
        n=n/10;
    }
    cout<<S;
    return 0;
}
