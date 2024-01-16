#include <iostream>
#include <cstring>
using namespace std;

char s, s1, s2;

int main()
{
    int c = 0, ok=0;
    s = cin.get();s1 = cin.get();s2 = cin.get();
    while (s2 != '\n' && s2!=-1)
    {
        if(s!='a'&&s!='e'&&s!='i'&&s!='o'&&s!='u'&&s!=' ' &&
           (s1=='a'||s1=='e'||s1=='i'||s1=='o'||s1=='u') &&
           s2!='a'&&s2!='e'&&s2!='i'&&s2!='o'&&s2!='u'&&s2!=' ')
                c++;
        s = s1;
        s1 = s2;
        s2 = cin.get();
    }
    cout << c;
    return 0;
}
