/**
  Determinăm de fiecare dată cel mai mare termen din Fibo mai mic sau egal cu n, îl afișăm
  și-l scădem din n, până când n devine 0
Ex: 30
determinăm 21
30-21=9
determinăm 8
9-8=1
determinăm 1
1-1=0 STOP
*/
#include <iostream>

using namespace std;

int main()
{
    int n,t1,t2,tc;
    cin>>n;
    while(n)
    {
        t1=0,t2=1;
        while(t2<=n)
        {
            tc=t1+t2;
            t1=t2;t2=tc;
        }
        cout<<t1<<" ";
        n-=t1;
    }
    return 0;
}
