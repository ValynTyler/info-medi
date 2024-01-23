/**
 Spargem stringul dat în cuvinte.
 Formăm două stringulețe, prin reconcatenare, unul cu cuvintele de lungime mai mică decât n
altul cu cele de lungime mai mare decât n.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], s1[101]="",s2[101]="";
    ///s1 și s2 - stringurile cu cuvinele de lungime mai mică respectiv mai mare
    int n;
    cin >> n;cin.get();
    cin.getline(s, 101);
    for(char* p=strtok(s, " ");p;p = strtok(NULL, " "))
        if (strlen(p) < n) {strcat(s1, p);strcat(s1," ");}
        else if (strlen(p) > n) {strcat(s2, p);strcat(s2," ");}
    if(s1[0]==0 || s2[0]==0)///cea mai scurtă variantă de verificat dacă un string este vid - dacă
        cout<<"nu exista";          ///are direct pe poziția 0 caracterul 0
    else
        cout << s1 <<endl<< s2;
    return 0;
}
