#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, impar = 0, par = 0, pimpar = 1, ppar = 1;
    cin >> n;
    do
    {
        if (n%2 == 0)
        {
            par += ppar * (n%10);
            ppar *= 10;
        }
        else
        {
            impar += pimpar * (n%10);
            pimpar *= 10;
        }
        n /= 10;
    }while (n);
    cout << abs(impar-par);
    return 0;
}
