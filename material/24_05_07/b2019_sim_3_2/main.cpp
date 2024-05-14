#include <iostream>
#include <cstring>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
    char s[51], * p, s1[51] = {};
    cin.getline(s, 51);
    p = strtok(s, " ");
    while (p)
    {
        if (strchr(p, '.'))
        {
            if (p[0]=='C')
                strcat(s1, "COLEGIUL"), strcat(s1, " ");
            else if (p[0]=='L')
                strcat(s1, "LICEUL"), strcat(s1, " ");
            else if (p[0]=='N')
                strcat(s1, "NATIONAL"), strcat(s1, " ");
            else
                strcat(s1, "TEORETIC"), strcat(s1, " ");
        }
        else strcat(s1, p), strcat(s1, " ");
        p = strtok(NULL, " ");
    }
    cout << s1;
    return 0;
}
