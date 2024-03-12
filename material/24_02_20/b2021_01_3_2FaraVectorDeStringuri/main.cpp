#include <iostream>
#include <cstring>

using namespace std;

/**
 Am folosit urmatoarea proprietate: în cadrul unui string POATE să apară
caracterul special \n care are rolul de a trece la rând nou.
  Astfel, afișând un singur string putem avea înglobate în el toate
trecerile la rând nou
*/

int main() {
    int n,k;
    cin >> n >> k;
    char cuv[11];
    char output[201] = "";///aici vom forma ceea ce afișăm
    for (int i = 0; i < n; i++) {
        cin >> cuv;
        if (strchr("aeiou", cuv[strlen(cuv) - 1]) && k > 0) {
            strcat(output, cuv);
            strcat(output, "\n");///aici concatenăm după fiecare cuvânt preluat trecerea la rând nou
            k--;
        }
    }
    cout << (k == 0 ? output : "nu exista");
    return 0;
}
