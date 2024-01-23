/**
Subiectul I:

1. d

2. b

   f(2023)=f(202)*10+2=323*10+2=3232
   f(202)=f(20)*10+3=32*10+3=323
   f(20)=f(2)*10+2=3*10+2=32
   f(2)=f(0)*10+3=0*10+3=3
   f(0)=0

3. a (restul sunt greșite sintactic - n-au ce căuta chestii cu punct sau cu paranteze rotunde
        în cadrul unor structuri)

4. d

   "Două amestecuri sunt distincte dacă diferă prin cel puțin un tip de ceai." înseamnă
că NU contează ordinea. Necontând ordinea, și fiind o alegere din 3 kestii din 5 nu pot fi
altceva decât combinări.
  Or, la combinări, o anumită soluție conține valorile în ordine crescătoare.

Deci, avem {1=matcha, 2=mate, 3=moringa, 4=oolong, 5=tulsi}.

iar soluțiile date sunt:
1=matcha, 3=moringa, 5=tulsi
3=moringa, 4=oolong, 5=tulsi
2=mate, 3=moringa, 4=oolong
4=oolong, 5=tulsi, 2=mate
Se vede că ultima e din altă poveste, deci e cea greșită

5. c

(Plecăm de la faptul că cele 8, ca să le despărțim în 3 ctc cu nr. par de elemente
 singura soluție este  4+2+2
 De exemplu CTC1 - 4 noduri
            CTC2 - 2 noduri
            CTC3 - 3 noduri

Între nodurile aceleiași CTC saturăm - punem orice arc posibil.
   Deci avem CTC1 - 12 arce, CTC2 - 2 arce CTC3 - 2 arce => TOTAL 16

   Apoi, ideea este să punem între CTC a.î. să nu facem întoarceri.
    - de la fiecare nod al CTC1 la fiecare nod al CTC2 => 8
    - de la fiecare nod al CTC1 la fiecare nod al CTC3 => 8
    - de la fiecare nod al CTC2 la fiecare nod al CTC3 => 4

TOTALUL TOTALULUI: 16+8+8+4=36

Vezi
b2023_sim_1_5Schita.png

Subiectul II:

1. Algoritmul dat citește un număr și-l transformă astfel:
    - înlocuiește toate 5-urile (dacă sunt) cu 0-uri
    - înlocuiește toate 4-urile (dacă sunt) cu 1-uri
    - înlocuiește toate 3-urile (dacă sunt) cu 2-uri
    - înlocuiește toate 2-urile (dacă sunt) cu 3-uri
    - înlocuiește toate 1-urile (dacă sunt) cu 4-uri

Răspunsuri:
a) 474

(- înlocuiește 5 cu 0 => 5174 -> 174
 - înlocuiește 4 cu 1 => 174 -> 171
 - înlocuiește 3 cu 2 => n-avem
 - înlocuiește 2 cu 3 => n-avem
 - înlocuiește 1 cu 4 => 171 -> 474
)
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
