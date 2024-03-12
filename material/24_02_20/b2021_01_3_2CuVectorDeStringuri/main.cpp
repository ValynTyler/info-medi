#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, k, nc=0;///nc=numărul de cuvinte cu propr. cerută
	char s[11], rez[21][11];
	///rez=vectorul în care punem DOAR cuvintele de care avem nevoie - cele care se termină în vocale
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		int pozu = strlen(s)-1;
		char c = s[pozu];
		if (strchr("aeiou", c))
			strcpy(rez[++nc], s);
	}
	if (nc < k) cout << "Nu exista";
	else for (int i = 1; i <= k; i++)
		cout << rez[i]<<"\n";
    return 0;
}
