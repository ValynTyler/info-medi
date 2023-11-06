#include <iostream>
using namespace std;

int main()
{
    long long n, s=0,i;
    cin >> n;
    for (i = 1; i*i < n; i++)
        if (n % i == 0)
            s += i+n/i;
    if(i*i==n)
            s+=i;
    cout << s;
    return 0;
}
