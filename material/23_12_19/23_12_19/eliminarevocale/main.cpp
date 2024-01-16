#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s, 256);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
        if (!strchr("AEIOUaeiou", s[i]))
            cout << s[i];
    return 0;
}
