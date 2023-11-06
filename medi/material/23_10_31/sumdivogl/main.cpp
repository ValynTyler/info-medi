#include <iostream>

using namespace std;

int sum_div(int n)
{
    int s = 0;
    for (int d = 1; d * d <= n; d++)
    {
        if (d * d == n)
        {
            s += d;
        }
        else if (n % d == 0)
        {
            s += d + n / d;
        }
    }
    return s;
}

int oglindit(int n)
{
    int ogl = 0;
    while (n)
    {
        ogl = n % 10 + ogl * 10;
        n /= 10;
    }
    return ogl;
}

int main()
{

    int n,i,x;
    cin >> n;
    long long s = 0;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        s += sum_div(oglindit(x));
    }
    cout << s;
    return 0;
}
