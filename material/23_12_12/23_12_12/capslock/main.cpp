#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
    char c;
    int caps_on=0;
    c=fin.get();
    while(c!='\n'&&c!=-1)
    {
        if(c=='#')
            caps_on=!caps_on;
        else
        {
            if(caps_on)
                c=toupper(c);
            fout<<c;
        }
        c=fin.get();
    }
    return 0;
}
