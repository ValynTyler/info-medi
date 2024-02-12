#include <iostream>
using namespace std;

void secventa(int &n)
{
    int a=n,p=1;///spargem numărul de la dreapta la stânga și pe cel nou îl formăm de asemenea
    n=0;///de la dreapta la stânga
    do
    {
        if(a%100==22)
            n=n+0*p;
        else
            n=n+(a%10)*p;
        p*=10;
        a=a/10;
    }while(a);
}

int main()
{
    int n;
    cin>>n;
    secventa(n);
    cout<<n;
    return 0;
}
