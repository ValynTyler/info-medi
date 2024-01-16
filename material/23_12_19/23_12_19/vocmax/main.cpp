#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
ifstream f("vocmax.in");
ofstream g("vocmax.out");
int main()
{
    char s[251],rez[251];
    int n,maxi=0,nrvoc;
    f>>n;
    f.get();
    for(int i=0; i<n; i++)
    {
        f.getline(s,251);
        nrvoc=0;
        for(int j=0; s[j]; j++)
            if(strchr("aeiouAEIOU",s[j])!=0)
                nrvoc++;
        if(nrvoc>maxi)
        {
            maxi=nrvoc;
            strcpy(rez,s);
        }
    }
    g<<rez;
    return 0;
}
