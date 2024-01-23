#include <iostream>
using namespace std;

int S(int n)
{
    int sum = 0;
    for (int d = 1; d <= n; d++)
        if (n % d == 0) sum += d;
    return sum;
}

int abundent(int n)
{
    for (int k = 1; k <= n - 1; k++)
        if ((double)S(n) / n <= (double)S(k) / k)
            return 0;
    return 1;
}

int main()
{
    cout << abundent(8);
    return 0;
}
