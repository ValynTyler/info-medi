#include <iostream>

using namespace std;

char m [20][20];
int main() {

    int i;
    int j;

    for (i = 0;i < 7;i++)
        for (j = 0;j < 7;j++)
            if (i <= j) {
                m[i][j] = 'a' + j - i;
            }
            else {
                m[i][j] = '+';
            }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
