#include <iostream>
using namespace std;

int main()
{
    char c;
    c=cin.get();
    int are_cons=0,are_vocale_nepermise=0;
    while(c!='\n'&&c!=-1)
    {
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
            are_cons=1;
        if(c=='a'||c=='e'||c=='o'||c=='u')
            are_vocale_nepermise=1;
        c=cin.get();
    }
    if(are_vocale_nepermise||!are_cons)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;
}
