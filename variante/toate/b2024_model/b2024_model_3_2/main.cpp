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
    char out1[101] = "";
    char out2[101] = "";

    cin >> x;
    cin.get();
    cin.getline(s, 101);

    char* p = strtok(s, " ");
    while (p) {
        if (strlen(p) < x) {
            strcat(out1, p);
            strcat(out1, " ");
        }
        else if (strlen(p) > x) {
            strcat(out2, p);
            strcat(out2, " ");
        }
        p = strtok(NULL, " ");
    }

    if (out1[0] == 0 || out2[0] == 0) {
        cout << "nu exista";
    } else {
        cout << out1 << '\n' << out2;
    }

    return 0;
}
