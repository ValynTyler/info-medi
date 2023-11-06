#include <iostream>

using namespace std;

int main() {

    int n,c1,c2;
    cin >> n;

    int newn = 0;
    int p = 1;
    do{
        c1=n/10%10;
        c2=n%10;
        newn=newn+c1*p;
        p*=10;
        newn=newn+c2*p;
        p*=10;
        n /= 100;
    }while (n);
    cout << newn;
    return 0;
}
