#include <iostream>
#include <cstring>
using namespace std;

char s;

int main()
{
    s = cin.get();
    while (s != '\n'&& s!=-1)
    {
        if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
            s=toupper(s);
        cout << s;
        s = cin.get();
    }
    return 0;
}
