#include <iostream>

using namespace std;

int main()
{
    long long n,cif;
    cin>>n;
    cif=-1;
    do
    {
        if(n%10%2==0)
            if(n%10>cif)
                cif=n%10;
        n=n/10;
    }while(n>0);
    if(cif!=-1)
        cout<<cif;
    else
        cout<<"10";
    return 0;
}
