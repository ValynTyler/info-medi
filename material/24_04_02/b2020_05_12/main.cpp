/**
I

1)b
2)c
3)c
4)d
5)b

II
1) Face suma cifrelor mai mari sau egale cu 5 din care scade dublul sumei celorlalte
Dacă dă 0 afișează doar "DA", în caz contrar afișează suma urmată de "NU"

a)5NU

b) 612 831
(posibile alte soluții: 603, 804 și orice permutări ale lor)

c)mai jos

d)
citește n (număr natural)
 m<-0
 c<-n%10; n<-[n/10]             ///De data asta e bun și dacă omitem repetarea
┌dacă c<5 atunci m<-m-2*c
│altfel m<-m+c
└■
┌cat timp n!=0 executa
│ c<-n%10; n<-[n/10]
│┌dacă c<5 atunci m<-m-2*c
││altfel m<-m+c
│└■
└■
┌dacă m=0 atunci scrie ‘DA’
│altfel scrie m, ‘NU’
└■
2)
struct procesor{
	char producator;
	int frecventa;
	double pret;
}p[20];

3)
for(i=0; i<5; i++)
	for(j=i+1; j<6; j++)
		if(a[i][2]%2==0 && a[j][2]%2 == 0 && a[i][2] > a[j][2])
		{
			k = a[j][2];
            a[j][2] = a[i][2];
            a[i][2] = k;
		}
*/
#include <iostream>

using namespace std;

int main()
{
	int n, m=0, c;
	cin >> n;
	do {
		c = n % 10;
		n /= 10;
		if (c < 5)m = m - 2 * c;
		else m += c;
	} while (n != 0);
	if (m == 0)cout << "DA";
	else cout << m << "NU";
}
