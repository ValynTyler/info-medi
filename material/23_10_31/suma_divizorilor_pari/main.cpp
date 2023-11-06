#include <iostream>

using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long s = 0,d;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
        {
            if (d % 2 == 0)
                s += d;
            if ((n / d) % 2 == 0)
                s += n / d;
        }
    if(d*d==n && d%2==0)
            s+=d;
    cout << s;
    return 0;
}
