/**
  după fiecare vocală afișăm un p și repetă vocala
*/
#include <iostream>

using namespace std;

int main()
{
    char c;
    c=cin.get();
    while(c!='\n'&&c!=-1)
    {
        cout<<c;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cout<<'p'<<c;
        c=cin.get();
    }
    return 0;
}
