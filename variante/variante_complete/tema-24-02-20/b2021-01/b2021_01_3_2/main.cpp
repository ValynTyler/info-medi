#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    char cuv[11];
    char output[201] = "";

    for (int i = 0; i < n; i++) {
        cin >> cuv;
        if (strchr("aeiou", cuv[strlen(cuv) - 1]) && k > 0) {
            strcat(output, cuv);
            strcat(output, "\n");
            k--;
        }
    }

    cout << (k == 0 ? output : "nu exista");

    return 0;
}
