/**
II

1. b

2. b - 4 noduri

  Dat fiind că un nod are gradul extern 3 (sau intern, e the same) însemană că din el
trebuie să plece 3 arce.
  Dat fiind că în programa de bac, teoria grafurilor NU permite existența de bucle
(arc de la un nod la el însuși) și nici de mai multe arce între aceleași două noduri,
e oarecum logic ca cele 3 arce să plece către ALTE 3 noduri. Deci rezultatul minim
n-ar avea cum să fie decât cu 4 noduri

  TOTUȘI, dacă s-ar fi permis bucle, se putea construi acest graf și cu 3 noduri.
(din acest motiv au acceptat și a-ul ca răspuns corect)

3. 1 8 9 (merge și 6)

4.
for(i=0;i<9;i++)
    for(j=0;j<9;j++)
    {
        if(i==j)
            a[i][j]=0;
        else
            a[i][j]=(i+j)%8;
    }

Ideea cea mai scurtă și eficientă de rezolvare este să parcurgem codul de la dreapta la stânga
și să selectăm literele corespunzătoare cifrelor pare, apoi să-l parcurgem de la stânga la dreapta
și să selectăm literele corespunzătoare cifrelo impare.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101], c[101],s1[101];
    cin.getline(s, 101);
    cin.getline(c, 101);
    int l = strlen(s),nc=0;
    if(l!=strlen(c))cout<<"cod incorect";
    else
    {
        for (int i = l-1; i >=0; i--)
            if (c[i] % 2 == 0)
                s1[nc++] = s[i];
        for (int i = 0; i < l; i++)
            if (c[i] % 2 != 0)
                s1[nc++] = s[i];
        s1[nc]=0;
        cout << s1;
    }
    return 0;
}
