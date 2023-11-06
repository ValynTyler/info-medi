/**
 Ne folosim de criteriul de divizibiliate cu 3: un nr. este divizibil cu 3 dacă și numai
dacă suma cifrelor sale este divizibilă cu 3.

 Soluție: facem suma cifrelor. Apoi iterăm prin cifrele numărului și scădem cifra curentă
din suma totală. Dacă rezultatul este divizibil cu 3, atunci tot numărul este divizibil cu 3.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,s=0,c,nr=0;
    cin>>n;
    c=n;
    do
    {
        s+=c%10;
        c/=10;
    }while(c);
    do
    {
        if((s-n%10)%3==0)
            nr++;
        n/=10;
    }while(n);
    cout<<nr;
    return 0;
}
