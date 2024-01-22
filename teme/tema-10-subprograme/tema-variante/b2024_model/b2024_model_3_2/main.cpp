#include <iostream>
#include <string.h>

using namespace std;

/*
Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate numai din litere mici ale alfabetului 
englez, sunt distincte și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la 
tastatură un număr natural n (n[1,102]), apoi un text de tipul precizat mai sus, și afișează pe ecran 
cuvinte ale acestuia, pe două linii separate, astfel încât prima linie să conțină mulțimea cuvintelor care 
au mai puțin de n  litere, iar a doua linie să conțină mulțimea cuvintelor care au mai mult de n  litere. 
Cuvintele de pe fiecare linie sunt afișate într-o ordine oarecare, iar dacă una dintre cele două mulțimi 
este vidă, se afișează pe ecran doar mesajul nu exista. 
 Exemplu: pentru n=3 și textul era o apa rece si cu gust bun 
se poate afișa pe ecran textul alăturat.
*/
// era o apa rece si cu gust bun
int main() {

    int x;
    char s[101];
    char mat[2][101][100];

    cin >> x;
    cin.get();
    cin.getline(s, 101);

    char* p = strtok(s, " ");
    int i = 0;
    int j = 0;
    while (p) {
        if (strlen(p) < x) {
            strcpy(mat[0][i++], p);
        }
        else if (strlen(p) > x) {
            strcpy(mat[1][j++], p);
        }
        p = strtok(NULL, " ");
    }

    for (int k = 0; k < i; k++) {
        cout << mat[0][k] << " ";
    }
    cout << endl;
    for (int k = 0; k < j; k++) {
        cout << mat[1][k] << " ";
    }

    return 0;
}
