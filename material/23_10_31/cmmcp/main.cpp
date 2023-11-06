#include <iostream>

using namespace std;

int main()
{
    long long a;
    int maxi=-1;
    cin >> a;
    do
    {
        if (a % 10 % 2 == 0)
        {
            if (a % 10 > maxi)
                maxi = a % 10;
        }
        a /= 10;
    }while (a);
    cout <<(maxi == -1? 10 : maxi);
}
