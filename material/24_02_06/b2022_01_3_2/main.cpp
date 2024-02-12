#include <iostream>
using namespace std;
int a[101][101],n,m;

int main()
{
    cin>>m>>n;
    for (int i=1; i<=m; ++i)
        for (int j=1; j<=n; ++j)
            cin>>a[i][j];
    int sum=0;
    for (int i=1; i<=m; ++i)
        for (int j=1; j<=n; ++j)
        {///parcela curentă trebuie înnisipată dacă este mai mică decât minimul ălora din jur
            int mini=11;///DECI, facem minimul ălora din jur:
            if (i+1<= m && a[i+1][j]< mini)///deci o luăm pe-aia de jos, cu cond. ca ea să existe
                mini=a[i+1][j];               ///deci de-aia verif. că i+1<=m
            if (i-1>=1 && a[i-1][j]< mini)///analog - pt. sus
                mini=a[i-1][j];
            if (j+1 <= n && a[i][j+1]< mini)///ăsta e cel din dreapta
                mini=a[i][j+1];
            if (j-1>=1 && a[i][j-1]< mini)///și ăsta cel din stânga
                mini=a[i][j-1];
            if (mini>a[i][j])///asta e condiția ca s-o înnisipăm pe a[i][j]
                sum+= mini-a[i][j];
        }
    cout<<sum;
    return 0;
}
