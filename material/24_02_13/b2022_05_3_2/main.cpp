#include <iostream>
#include <cstring>
using namespace std;

char vocala_prietena(char cons) {
    char VOCALE[6]="aeiou";
    for (int i = 4; i >= 1; i--)
        if (cons >= VOCALE[i])
                return VOCALE[i];
    return 'a';
}

int main() {

    char cuvant[51];
    cin.get(cuvant, 51);
    for (int i = 0; cuvant[i]; i++)
        cuvant[i]=vocala_prietena(cuvant[i]);
    cout<<cuvant;
    return 0;
}
