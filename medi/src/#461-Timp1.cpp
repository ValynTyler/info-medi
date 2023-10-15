#include <iostream>

using namespace std;

// int main() {

//     int h1, m1;
//     cin >> h1 >> m1;
    
//     int x, y;
//     cin >>  x >> y;

//     int h = (h1 + x) % 24 + (m1 + y) / 60;
//     int m = (m1 + y) % 60;

//     cout << h << " " << m;


//     return 0;
// }

int main() {

    int h1, m1;
    cin >> h1 >> m1;
    
    long long initial_time_in_minutes = m1 + h1 * 60;
    

    int x, y;
    cin >>  x >> y;

    long long added_time_in_minutes = y + x * 60;


    long long time_in_minutes = initial_time_in_minutes + added_time_in_minutes;


    int h2 = (time_in_minutes / 60) % 24;
    int m2 = time_in_minutes % 60;
    cout << h2 << " " << m2;

    return 0;
}
