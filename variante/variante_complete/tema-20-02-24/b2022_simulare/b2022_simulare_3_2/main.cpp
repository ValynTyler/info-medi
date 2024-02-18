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
        if (strcmp(x, pren) + 1) {
            cout << nume << " ";
        }

        pren = strtok(NULL, "; ");
        nume = strtok(NULL, "; ");
    };

    return 0;
}
