#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1,s2;
    s1=cin.get();
    s1=toupper(s1);
    s2=cin.get();
    while(s2!='\n' && s2!=-1)
    {
        if(s1==' ')s2=toupper(s2);
        if(s2==' ')s1=toupper(s1);
        cout<<s1;
        s1=s2;
        s2=cin.get();
    }
    s1=toupper(s1);
    cout<<s1;
    return 0;
}
