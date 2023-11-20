#include <iostream>
using namespace std;
int main()
{
    int nr1=-1,nr2=-1,c=0;
    cin>>nr1;
    if(nr1)
    {
        cin>>nr2;
        while(nr2)
        {
            if(abs(nr1%10)==abs(nr2%10))
                c++;
            nr1=nr2;
            cin>>nr2;
        }
    }
    cout<<c;
    return 0;
}
