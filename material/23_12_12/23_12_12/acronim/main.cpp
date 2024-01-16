#include <iostream>
#include <cstring>
using namespace std;

char s, s1=3, c;

// Universitatea de Arte Plastice BUCURESTI

int main()
{
    s = cin.get();
    if (isupper(s))
        cout << s;
    s1=cin.get();
    while (s1 != '\n' && s1!=-1)
    {
        if (s==' '&&isupper(s1))
            cout << s1;
        s = s1;
        s1 = cin.get();
    }
    return 0;
}
