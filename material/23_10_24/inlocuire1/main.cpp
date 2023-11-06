#include <iostream>

using namespace std;

int main()
{
    int n, nn = 0, p = 1, c, c1, c2;
    cin >> n >> c1 >> c2;
    do
    {
        c = n % 10;
        if (c == c1)
            c = c2;
        nn = p * c + nn;
        p *= 10;
        n /= 10;
    }while (n);
    cout << nn;
}
