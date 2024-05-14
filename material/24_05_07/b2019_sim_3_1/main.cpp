#include <iostream>
using namespace std;

void inserare(int& n)
{
    int nux = 0, c, p=1;
    ///nux îl formăm de la dreapta la stânga
    while (n > 9)
    {    1
        nux = n % 10 * p + nux;
        p *= 10;
        c = abs(n % 10 - n / 10 % 10);
        nux = c * p + nux;
        p *= 10;
        n /= 10;
    }
    n = n * p + nux;
}

int main()
{
    int n = 7255;
    inserare(n);
    cout << n;
    return 0;
}
