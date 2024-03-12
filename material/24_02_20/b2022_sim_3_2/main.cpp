#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char text[251],x[251];
    int ok=0;
    cin.getline(text, 251);
    cin.get(x,251);
    char* pren = strtok(text, "; ");
    char* nume = strtok(NULL, "; ");
    while(pren)
    {
        if (strcmp(x, pren)==0)///strcmp întoarce 0 dacă sunt egale
        {
            cout << nume << " ";
            ok=1;
        }
        pren = strtok(NULL, "; ");
        nume = strtok(NULL, "; ");
    }
    if(!ok)cout<<"NU";
    return 0;
}
