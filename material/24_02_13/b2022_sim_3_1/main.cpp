#include <iostream>
using namespace std;

///varianta asta are ordinul de complexiate O(n)
void rest(int x, int y, int n, int &k)
{
    k=0;
    for (int i=1; i<=n; i++)
        if (i%x==2 && i%y==2)
           k=i;
}

///let's write a more efficient algorithm:
/** plecăm de la observația că dacă un număr a are proprietatea că
        a%x==2 => a-2 este un multiplu de x
        analog
        a%y==2 => a-2 este un multiplu de y
DECI a-2 este un multiplu și de x și de y, adică un multiplu comun.
  Prin urmare problema noastră se reduce la a căuta un multiplu comun mai mic
  sau egal cu o valoare dată, n.

    Păi acest multiplu va fi de fapt un multiplu al cmmdc-ului (care este cel mai
mic multiplu comun)
    deci a-2 este de forma k*cmmdc
DECI ne trebuie cel mai mare k*cmmdc <= n-2
   Acest multiplu este de fapt  [(n-2)/cmmdc]*cmmdc

    Deci algoritmul este următorul:
    - calculăm cmmdc(x,y)
    - determinăm [(n-2)/cmmdc]*cmmdc+2

Ordinul de complexitate devine de fapt ordinul calculului cmmmc-ului.
Acesta bazându-se pe cmmdc, devine ordinul alg. lui Euclid, adică
 logaritmic.

Mai trebuie totuși tratate cazurile excepție: doar x=1 și x=2
*/

void rest_eficient(int x,int y,int n,int &k)
{
    if(x<3)k=2;
    else
    {
        int a=x,b=y,r,cmmmc;
        while(b)
        {
            r=a%b;a=b;b=r;
        }
        cmmmc=x/a*y;
        k=(n-2)/cmmmc*cmmmc+2;
    }
}

int main()
{
    int x,y,n,r;
    cin>>x>>y>>n;
    rest(x,y,n,r);
    cout<<r<<"\n";
    rest_eficient(x,y,n,r);
    cout<<r<<"\n";
    return 0;
}
