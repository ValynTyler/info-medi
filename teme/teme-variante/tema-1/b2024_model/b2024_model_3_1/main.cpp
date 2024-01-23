#include <iostream>

using namespace std;

/*
Subprogramul produs  are doi parametri,  a și b, prin care primește câte un număr natural din intervalul 
[1,10^3]. Subprogramul returnează produsul divizorilor naturali comuni lui a și b. 
Scrieți definiția completă a subprogramului. 
Exemplu: dacă a=20 și b=12, atunci subprogramul returnează valoarea 8 (1∙2∙4=8).
*/
int prod_div(int a, int b) {
    int n = 2;
    int p = 1;
    
    while (n < a) {
        if (a % n == 0 && b % n == 0) {
            p *= n;
        }
        n++;
    }

    return p;
}

int main() {

    cout << prod_div(20, 12);

    return 0;
}
