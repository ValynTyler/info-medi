#include <iostream>
#include <cstring>

using namespace std;

/*
Subiectul al II-lea
-------------------
1. b
2. Nu poți avea gradul intern 2 și 3 în același timp, însă poți avea, de exemplu,
gradul extern 3 și gradul intern 3, sau gradul extern 3 și gradul intern 2,
deci numărul minim de noduri este 3. (a)
3. 6, 8, 9, (1)
4. {
    int n = (i + j) % 8;

    if (i == j) {
        n = 0;
    }

    a[i][j] = n;
}
5.

*/

int a[10][10];

int patru() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            {
                int n = (i + j) % 8;

                if (i == j) {
                    n = 0;
                }

                a[i][j] = n;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}

void insert_f(char* s, char c) {
    char aux[101] = "";
    strcpy(aux, s);

    int len = strlen(s);
    for (int i = 0; i < len-1; i++) {
        s[i + 1] = aux[i];
    }

    s[0] = c;
}

int cinci() {
    char s[101], c[101];

    cin.getline(s, 101);
    cin.getline(c, 101);

    int len = strlen(s);

    if (len != strlen(c)) {
        cout << "cod incorect\n";
        return 0;
    }

    char q[101];
    strcpy(q, s);

    for (int i = 0; i < len; i++) {
        if (c[i] % 2 == 0) {
            insert_f(q, s[i]);            
        } else {
            q[i] = s[i];
        }
    }

    cout << q;

    return 0;    
}

int main() {

    cinci();
    
    return 0;
}
