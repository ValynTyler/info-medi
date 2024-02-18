#include <iostream>
using namespace std;

/*
20  30  80  52
71  93  64  51
62  81  55  49
90  65  32  22
*/

int n;
int a[100][100];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = i; j < n-1; j++)
            a[i][j] = a[i][j+1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
