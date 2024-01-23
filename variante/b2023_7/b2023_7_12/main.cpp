#include <iostream>

using namespace std;

/*
Sub I
-----
1.

y%x – (x/y)*3 != 0

a. x=25 și y=75
b. x=25 și y=15
c. x=15 și y=0
d. x=10 și y=30

R: b)

2.

f(3, 2) = f(3, 2/2)^2 = 3*3 = 9
f(3, 1) = f(3, 1/2)^2 * 3 = 1*1*3 = 3
f(3, 0) = 1;

R: c)

3. a)

4. b)

5. c)

Sub II
------
1.
a) 3 // ups e 2 nvm
b) 2, 0, 2, 0
c)  | (mai jos)
    |
    |
    V

d)
citește n (număr natural nenul)
x<-0
┌pentru i<-1,n execută
│ citește a,b (numere naturale)
│ c<-a; p<-1
│┌cât timp a>9 execută
││ a<-[a/10]; p<-p*10
│└■
│ a<-a*p+b
│┌dacă a≠c atunci
││ x<-x+1
│└■
└■
scrie x

2. R: 2, 3

3.
if (p.pret < 100) {
    a = p.denumire[0];
} else {
    a = '*';
}

*/

int main() {
    int n;
    cin >> n;

    int x = 0;

    int a, b, c, p;

    while (n > 0) {
        cin >> a >> b;

        c = a;
        p = 1;
        while (a > 9) {
            a /= 10;
            p *= 10;
        }

        a = a * p + b;

        if (a != c) {
            x++;
        }
        n--;
    }

    cout << x;

    return 0;
}
