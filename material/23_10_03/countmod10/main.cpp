/**
  Dat fiind un număr natural x, numărul de valori divizibile cu 10 dintre 1 și x este
chiar x/10

Ex: x=100  -> 100/10 = 10
    x=101  -> 101/10 = 10
    ..
    x=109  -> 109/10 = 10
    x=110  -> 110/10 = 11

DECI dacă ne trebuie dintr-un interval [a,b] trebuie ca din nr. divizibile cu 10
<=b să le scădem pe cele STRICT mai mici decât a.
      Soluția:  b/10-(a-1)/10
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<b/10-(a-1)/10;
    return 0;
}
