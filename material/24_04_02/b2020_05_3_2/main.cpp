/**
  Separ cuvintele stringului cu strtok.
  Dat fiind că prelucrările cuvintelor nu depășesc lungimea lor inițială, putem
lucra direct în pointerul cu care facem separarea.
  Dacă lungimea cuvântului curent este impară, îi facem oglindirea - inversăm între ele
literele egal depărtate de capete care NU sunt egale (folosim un flag, ca să știm și dacă
e cazul să afișăm "Nu exista")
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[102],*p,rez[102]="",aux;
    int i,j,ok=0;
    cin.getline(s,102);
    for(p=strtok(s," ");p;p=strtok(NULL," "))
    {
        if(strlen(p)%2)///deci dacă lungimea-i impară
        {///facem rocada literelor egal depărtate de kpete:
            i=0;j=strlen(p)-1;
            while(i<j)
            {
                if(p[i]!=p[j])
                {
                    ok=1;
                    aux=p[i];p[i]=p[j];p[j]=aux;
                }
                i++;j--;
            }
        }
        strcat(rez,p);
        strcat(rez," ");
    }
    strcpy(s,rez);
    if(ok==0)
        cout<<"nu exista";
    else
        cout<<s;
    return 0;
}
