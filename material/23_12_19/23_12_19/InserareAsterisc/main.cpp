#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],b[201];
    int k=0;
    cin.get(s,101);
    int n=strlen(s);
    for(int i=0; i<n; i++)
    {
        b[k++]=s[i];
        if(strchr("aeiou",s[i])!=0)
            b[k++]='*';
    }
    b[k]='\0';
    if(k==n)cout<<"FARA VOCALE";
    else
        cout<<b;
    return 0;
}
