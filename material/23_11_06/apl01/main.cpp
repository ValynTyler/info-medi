/**
  Un algoritm de generat numere pseudo-aleatoare: pornim de la un număr prim de 4 cifre.
La fiecare pas pornim de la ultimul număr generat, determinăm următorul număr prim
de după el, îl ridicăm la pătrat și alegem numărul format din cifrele de pe pozițiile 2-6:
  Citim n (maxim 1000000) și un număr de 4 cifre, care este baza de plecare.

  Pe baza alg. de mai sus să generăm un șir de n elemente având ca valori numerele respective.
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

int main()
{
    int n,seed,i,x;
    cin>>n>>seed;
    while(!is_prime(seed))
            seed++;
    a[1]=seed;
    for(i=2;i<=n;i++)
    {
        x=a[i-1];
        while(x<1000 && !is_prime(x))x++;
        a[i]=(x*x)/100%10000;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
