/**
Se dă n.
Să afișăm toate nr. obținute din el prin ștergerea câte unei cifre.
Ex:
n=61428
Răspuns:
6142
6148
6128
6428
1428

Soluție: folosim un p = puterea corespunzătoare cifrei pe care o ștergem.
Ex:
p=100 pe exemplul de mai sus îl ștergem pe "4"

numărul obținut prin ștergere este:
  n/(p*10)*p+n%p
*/
#include <iostream>

using namespace std;

int main()
{
    int n,p=1;
    cin>>n;
    while(p<=n)
    {
        cout<<n/(p*10)*p+n%p<<"\n";
        p*=10;
    }
    return 0;
}
