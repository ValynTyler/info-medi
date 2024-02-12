/**
I
1) b. - dacă aplicăm regulile negației expresiei de la b iese:

        !(x<3 || x>=10) <=> !(x<3) && !(x>=10) <=>
        x>=3 && x<10 - adică exact expresia dată.


2) a. y+2  - asta corespunde creșterii din 2 în 2 la for-ul de pe varianta
      eficientă a algoritmului de numere prime

3) d. (prună, caisă, piersică)

4) c. 79

5) b. [1,4] și [5,7]

II
1. Pleacă de la n în jos și se oprește pe primul număr întâlnit care NU mai este
prin între el cu m.

a) 45

b) 11,12 (merg și 10,13,14)

c) mai jos

d)
citeşte m,n (numere naturale nenule, m<n)
x<-1   - acest dacă este VIZIBIL redundanat, pt. că noi tocmai îi dăm lui x valoarea 1
┌dacă x=1 atunci          ///și fix la pasul următor ne-ntrebăm dacă este 1
│┌execută
││ x<-m; y<-n; n<-n-1
││┌cât timp x≠y execută
│││┌dacă x>y atunci x<-x-y
││││altfel y<-y-x
│││└■
││└■
│└cat timp x=1
└■
scrie n+1

2) 2,8

3) if(x.temperatura>11)
       cout<<"CALDUROS";
    else
       if(meteo.temperatura<10)
         cout<<"RACOROS";
    else
         cout<<"NORMAL";
*/
#include <iostream>
using namespace std;
int main()
{
    int m,n,x,y;
    cin>>m>>n;
    x=1;
    while(x==1)
    {
        x=m;y=n;n=n-1;
        while(x!=y)
        {
            if(x>y)
                x=x-y;
            else
                y=y-x;
        }
    }
    cout<<n+1;
    return 0;
}
