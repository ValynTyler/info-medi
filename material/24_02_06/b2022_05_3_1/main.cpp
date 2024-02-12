#include <iostream>
using namespace std;

void schimb(int &n, int x, int p)
{
    int cnt = 0, nux = 0, put = 1;
    do
    {
        if (cnt == p)
             nux = x * put + nux;
        else
            nux = n % 10 * put + nux;
        n /= 10;
        put *= 10;
        cnt++;
    }while (n);
    n = nux;
}

int main()
{
    int n=12587;
    schimb(n, 6, 3);
    cout<<n;
    return 0;
}
