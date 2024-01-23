#include <iostream>

using namespace std;

int suma_factori_primi_distincti(int n) {

    int sum = 0;
    int last_d = 1;

    // algoritmul nu scoate factori non-primi, 
    // asa ca nu trebuie verificata primalitatea
    for (int d = 2; d * d <= n; d++) {

        while (n % d == 0) {
            n /= d;

            if (d != last_d) {
                sum += d;
                last_d = d;
            }
        }
    }

    // n poate contine ultimul factor al n-ului original, asa ca
    // daca nu este 1, trebuie adaugat la suma
    if (n != 1) {
        sum += n;
    }

    return sum;
}

int main() {

    int a;
    int b;
    cin >> a >> b;


    int suma_a = suma_factori_primi_distincti(a);
    int suma_b = suma_factori_primi_distincti(b);


    if (suma_a == suma_b) {
        
        cout << (a < b ? a : b);
    }
    else {
        cout << (suma_a > suma_b ? a : b); 
    }

    return 0;
}
