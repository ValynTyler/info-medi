#include <iostream>

using namespace std;

void cuburi_recv(int n, int i) {
    if (i == n) {
        cout << n * n * n <<  " ";
    } else {
        cuburi_recv(n, i + 1);
        cout << i * i * i <<  " ";
    }
}

void cuburi(int n) {
    cuburi_recv(n, 1);
}

int main() {

    cuburi(5);

    return 0;
}
