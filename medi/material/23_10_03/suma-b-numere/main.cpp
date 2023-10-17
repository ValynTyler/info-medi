/**
Să scriem generic b numere consecutive cu suma egală cu a:

   n+(n+1)+(n+2)+...+(n+b-1) = a

   n*b + b*(b-1)/2 = a

   n = (a-b*(b-1)/2)/b

   Pur și simplu, dacă rezutatul NU dă cu zecimale și dă pozitiv,
înseamnă că se poate
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;
    if((a-b*(b-1)/2)%b!=0)
            cout<<"NU";
    else
    {
        n=(a-b*(b-1)/2)/b;
        if(n>=0)cout<<"DA";
        else cout<<"NU";
    }
    return 0;
}
