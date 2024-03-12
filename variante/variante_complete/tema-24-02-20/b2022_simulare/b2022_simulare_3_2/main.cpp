#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream fin("petrecere.in");

int main() {
    
    char text[251];
    fin.getline(text, 251);

    char x[51];
    fin.get(x, 51);

    char* pren = strtok(text, "; ");
    char* nume = strtok(NULL, "; ");
    
    while(pren) {
        // `strcmp` intoarce 0 DACA lhs si rhs SUNT egale,
        //  intoarce -1 daca lhs.alphabetic < rhs.alphabetic
        //  si 1 daca lhs.alphabetic > rhs.alphabetic
        if (strcmp(x, pren) == 0) {
            cout << nume << " ";
        }

        pren = strtok(NULL, "; ");
        nume = strtok(NULL, "; ");
    };

    return 0;
}
