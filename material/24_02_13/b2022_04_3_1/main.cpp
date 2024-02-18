#include <iostream>
using namespace std;

void patrate(int n, int &x, int &y)
{
	for(x=2;x*x<=n;x++)
        for(y=x+1;x*x*y*y<=n;y++)
            if(x*x*y*y==n)
                return;
    x=y=0;
}

int main()
{
	int x, y;
	patrate(100, x, y);
	cout << x << ' ' << y;
    return 0;
}
