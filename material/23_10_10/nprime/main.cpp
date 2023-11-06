#include <iostream>
#include <cmath>
int Prim(int n);
using namespace std;

int main()
{
    int a,i;
    cin>>a;
    i=2;
    while(a!=0){
        if(Prim(i)){
            cout<<i<<' ';
            a=a-1;
        }
        i++;
    }
    return 0;
}

int Prim(int n){
    if(n<=1||n>2&&n%2==0)return 0;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)
            return 0;
    return 1;
}
