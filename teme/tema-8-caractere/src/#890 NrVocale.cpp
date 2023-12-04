#include <iostream>

using namespace std;

void rezolvare() {
    int ap[5];
    char c = cin.get();
    while (c != -1 && c != '\n') {
        switch (c) {
        case 'A':
            ap[0]++;
            break;
        case 'a':
            ap[0]++;
            break;
        case 'E':
            ap[1]++;
            break;
        case 'e':
            ap[1]++;
            break;
        case 'I':
            ap[2]++;
            break;
        case 'i':
            ap[2]++;
            break;
        case 'O':
            ap[3]++;
            break;
        case 'o':
            ap[3]++;
            break;
        case 'U':
            ap[4]++;
            break;
        case 'u':
            ap[4]++;
            break;
        default:
            break;
        }
        c = cin.get();
    }
    int max = -1;
    int max_i = -1;
    for (int i = 0; i < 5; i++) {
        if (ap[i] > max) {
            max = ap[i];
            max_i = i;
        }
    }
    switch (max_i)
    {
    case 0:
        cout << 'A';
        break;
    case 1:
        cout << 'E';
        break;
    case 2:
        cout << 'I';
        break;
    case 3:
        cout << 'O';
        break;
    case 4:
        cout << 'U';
        break;
    default:
        break;
    }
}

int main() {
    rezolvare();
    return 0;
}
