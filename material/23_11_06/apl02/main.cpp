/**
Pe baza algoritmului din apl01 să generăm un șir cu n valori pseudo-aleatoare, luând ca seed numărul
1204.
 Să determinăm care valoare apare cel mai frecvent în șirul generat.
 Dacă sunt mai multe valori cu același număr de apariții cel mai frecvent, să o determinăm pe cea
 maximă
*/
#include <iostream>
using namespace std;

int is_prime(int n)
{
    if(n<=1||n>2&&n%2==0)return 0;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)return 0;
    return 1;
}

int a[1000001];
int nr[10000];///pt. că valorile sunt între 0 și 9999

int main()
{
    int n,seed=1204,i,x;
    ///cin>>n;
    n=1000000;
    while(!is_prime(seed))
            seed++;
    a[1]=seed;
    for(i=2;i<=n;i++)
    {
        x=a[i-1];
        while(x<1000 && !is_prime(x))x++;
        a[i]=(x*x)/100%10000;
    }
    /*for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";*/
    int lmin=10000,lmax=-1;
    for(i=1;i<=n;i++)
    {
        if(a[i]<lmin)lmin=a[i];
        if(a[i]>lmax)lmax=a[i];
        nr[a[i]]++;
    }
    ///fac maximul din vectorul nr
    int mx=0,vmx;
    for(i=lmin;i<=lmax;i++)
        if(nr[i]>=mx)
        {
            mx=nr[i];
            vmx=i;
        }
    cout<<mx<<" "<<vmx;
    return 0;
}
