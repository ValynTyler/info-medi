/**
1. c

2. Simulează împărțirea reală, și afișează câtul real dintre a și b cu un număr
de n zecimale.
  Dacă b==0 afișează "greșit"
  Dacă a se împarte exact la b atunci afișează doar câtul întreg (fără virgulă și fără zecimale)
  Dacă rezultatul împărțirii are mai puțin de n zecimale, îl scrie cu câte are (adică mai puțin de n)

Răspunsuri:
a) 2,8333

b)

Regula aplicată mecanic:
citeşte a,b,n (numere naturale)
┌dacă b=0 atunci
│ scrie ”greşit”
│altfel
│ scrie [a/b]
│ ┌dacă n>0 şi a%b ≠0 atunci
│ │ scrie ”,”
│ │ a <- a%b; i <- 0
│ │ scrie [(a*10)/b]     } dăm copy+paste
│ │ a <- (a*10)%b        } întregului miez al repetitivei
│ │ i <- i+1             } înaintea celei în care o transformăm
│ │ ┌cât timp i!=n și a!=0
│ │ │ scrie [(a*10)/b]
│ │ │ a <- (a*10)%b
│ │ │ i <- i+1
│ │ └■
│ └■
└■

HOWEVER, acest caz particular de algoritm este echivalent cu cel
dar CHIAR ȘI DACĂ NU mai dăm copy+paste miezului și înaintea sa:

citeşte a,b,n (numere naturale)
┌dacă b=0 atunci
│ scrie ”greşit”
│altfel
│ scrie [a/b]
│ ┌dacă n>0 şi a%b ≠0 atunci
│ │ scrie ”,”
│ │ a <- a%b; i <- 0
│ │ ┌cât timp i!=n și a!=0  ///dacă analizăm, constatăm că a ajung aici pt. că a trecut de
│ │ │ scrie [(a*10)/b]      ///if-ul de mai sus. Acest if de mai sus ne garantează că n>0
│ │ │ a <- (a*10)%b         ///și că a%b!=0. Deci, inițial, când i<-0 sigur va fi i!=n
│ │ │ i <- i+1              ///și se asemenea a!=0, pt. că înainte de while a primit valoarea
│ │ └■                      /// a%b care și ea este !=0
│ └■
└■

c) mai jos

d) Soluțiile de aici se încadrează la categoria rezultatelor care dau exact, și noi le cerem cu 2
zecimale în plus.
Posibile soluții:
   31 4 4
   9 2 3
   9 8 5
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,n,i;
    cin>>a>>b>>n;
    if(b==0)
        cout<<"gresit";
    else
    {
        cout<<a/b;
        if(n>0&&a%b!=0)
        {
            cout<<",";
            a=a%b;i=0;
            do
            {
                cout<<(a*10)/b;
                a=(a*10)%b;
                i++;
            }while(i!=n&&a!=0);
        }
    }
    return 0;
}
