#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main(){
    int i,n;
    char s[25];
    fin >> n ;
    for (i=1;i<=n;i++)
    {
        fin >> s;
        int i=0,j=strlen(s)-1;
        while(i<j && s[i]==s[j])
        {
            i++;j--;
        }
        if(i<j)
            fout<<"0\n";
        else
            fout<<"1\n";
    }
    return 0;
}
