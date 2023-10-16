#include <iostream>
#include <fstream>

using namespace std;


int oglindit(int n) {
    int ogl = 0;
    while (n) {
        ogl = n % 10 + ogl * 10;
        n /= 10;
    }
    return ogl;
}

int urma(int n) {
    int nines = 9;
    int aux = n/10;
    while (aux)
    {
        nines = nines * 10 + 9;
        aux/=10;
    }
    
    return nines - n;
}

int main() {

    ifstream fin ("nrcurat.in");
    ofstream fout ("nrcurat.out");

    int n;
    while (fin >> n)
    {
        fout << (urma(n) == oglindit(n)) << " ";
    }
    
    return 0;
}
