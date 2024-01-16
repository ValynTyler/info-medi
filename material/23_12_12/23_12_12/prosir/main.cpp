#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

int main()
{
    char b, c;
    b = fin.get();c=fin.get();
    while (c != '.')
    {
        if( (c==' '||c=='.') && b!=' ')
            b='5';
        fout<<b;
        b = c;
        c = fin.get();
    }
    fout<<"5.";
    return 0;
}
