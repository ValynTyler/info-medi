#include <iostream>
using namespace std;

/**
Ordinul de complexitate al subprogramului de mai jos este liniar, și anume
 O(min(a,b)). Dat fiind că în problema de față a și b sunt maxim 1000, este suficient
 de rapid
*/
int produs(int a, int b)
{
	int r, p = 1;
	r=a;if(b<a)r=b;///calculăm în r minimul dintre a și b
	for (int i = 2; i <= r; i++)
        if (a % i == 0 && b % i == 0)
			p *= i;
	return p;
}

///dacă chiar vrem să ne dăm mari și să pierdem timp inutil pe un algoritm eficient
///pentru subprogramul ăsta calculăm mai întâi cmmdc-ul dintre a și b și apoi facem produsul
///divizorilor acestuia ÎN  MOD eficient.
///Ordinul de complexitate va fi logaritmic de la cmmdc-ul eficient prin alg. lui Euclid
///urmat de radical(cmmdc). Acesta din urmă fiind mai mare, DOAR el contează
///deci ordinul de complexiatate este O(radical(cmmdc)).
///În cel mai rău caz (pe cmmdc-ul maxim posibil care este 1000) nr. de pași este 31.
int produs_ef(int a, int b)
{
    int r,p=1,d;
    while(b)
    {
        r=a%b;
        a=b;b=r;
    }
    ///facem produsul divizorilor lui a (acolo a rămas cmmdc-ul) în mod eficient
    for(d=1;d*d<a;d++)
        if(a%d==0)
            p=p*d*(a/d);
    if(d*d==a)
            p*=d;
    return p;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << produs(a, b)<<"\n";
	cout << produs_ef(a, b);
	return 0;
}
