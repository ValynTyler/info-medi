#include <iostream>
#include <cstring>
using namespace std;

char s, l;
int a, e, i, o, u, maxi;

int main()
{
    s = cin.get();
    while (s != '\n'&& s!=-1)
    {
        if(s=='a'||s=='A')a++;
        if(s=='e'||s=='E')e++;
        if(s=='i'||s=='I')i++;
        if(s=='o'||s=='O')o++;
        if(s=='u'||s=='U')u++;
        s = cin.get();
    }
    if (a >= e) maxi = a, l='A';
          else maxi = e, l='E';
    if (i > maxi) maxi = i, l='I';
    if (o > maxi) maxi = o, l='O';
    if (u > maxi) maxi = u, l='U';
    cout << l;
    return 0;
}
