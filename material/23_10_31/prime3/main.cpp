#include <iostream>

using namespace std;

int is_prime(int n)
{
    if (n < 2 || n>2 && n % 2 == 0)
        return 0;
    else
        for (int d = 3; d * d <= n; d = d + 2)
            if (n % d == 0)
                return 0;
    return 1;
}

int main()
{
    long long n, v, c=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin>>v;
        if (is_prime(v))
            c += v;
    }
    cout << c;
    return 0;
}
