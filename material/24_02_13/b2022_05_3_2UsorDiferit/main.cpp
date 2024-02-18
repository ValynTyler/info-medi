#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[51];
    cin>>s;
    int i;
    for(i=0;s[i];i++)
        while(strchr("aeiou",s[i])==NULL)///deci cât timp s[i] NU este vocală
                s[i]--;
    cout<<s;
    return 0;
}
