#include <iostream>

using namespace std;

/*
Subiectul I
-----------
1. = 3 + 2.5 + 2 = 7.5 => d
2. f(0, v) = 2020 => v = [0, 2, 0, 1] -> b
3. b
4. 1, 2, 4, 9, 10
5. a

Subiectul II
------------
1.
// Programul afiseaza vectorul de aparitie pentru
// valorile pare, cifre ale lui a
a) 1 1 1 0 0
b) 20468, 86420;
c) (Mai jos)
d)
citește a (număr natural) 
 c←←←←0 
┌repetă 
│ b←←←←a; x←←←←0 
│┌cat timp b!= 0 si x != 1 executa  // cond. initiala va fi mereu falsa datorita faptului ca lui x ii este atribuit 0 nu mai mult decat o linie mai sus.
││┌dacă b%10=c atunci 
│││ x←←←←1   
││└■  
││ b←←←←[b/10] 
│└■
│ scrie x,’ ’ 
│ c←←←←c+2  
└până când c>9

2.
struct calculator {
    char monitor;
    struct memorie {
        int interna;
        int externa;
    }
}c;

3.
for(i=0;i<9;i++)
  for(j=0;j<9;j++)
    if ((i > j) && (i > 8-j)) {
        a[i][j] = '<';
    } else {
        a[i][j] = '>';
    }
 
*/

int main() {
    int a;
    cin >> a;

    int c = 0;
    int b, x;

    do {
        b = a;
        x = 0;
        do {
            if (b % 10 == c) {
                x=1;
            }
            b /= 10;
        } while (b != 0 && x != 1);
        cout << x << " ";
        c += 2;
    } while (c <= 9);

    return 0;
}
