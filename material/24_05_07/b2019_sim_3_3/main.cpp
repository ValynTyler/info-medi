/**
  Dacă orice element par din prima jumătate este mai mic strict decât orice element impar
din a doua jumătate, asta înseamnă de fapt că maximul parelor din prima jumătate este mai
mic decât minimul imparelor din a doua jumătate și analog maximul imparelor din prima
jumătate este și el mai mic decât minimul parelor din a doua jumătate.
  Dacă inițializăm maximul cu o valoare mică decât toate valorile posibile respectiv minimul
cu o valoare mai mare decât toate valorile posibile, programul tot va funcționa corect
și pe cazurile în care tot șirul are aceeași paritate.

  Prin urmare e suficient să determinăm maximul parelor respectiv imparelor din prima jumătate
apoi minimul parelor respectiv imparelor din a doua jumătate și dacă maximele din prima
jumătate sunt mai mici decât minimele din a doua jumătate, în ordine inversă, atunci șirul
este paritar.

  Alg. este eficient d.p.d.v. al timpului de executare deoarece face puțini pași pentru
că parcurge datele de intrare o singură dată.
  Alg. este eficient d.p.d.v. al memoriei deoarece utilizăm doar câteva variabile simple
(nu utilizăm tablouri sau alte date structurate) memoria totală ocupată de variabilele
programului fiind de 24 byte.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int n, max1p=-1,max1i=-1,min2p=1000001,min2i=1000001,x;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> x;
        if (x%2==0 && x > max1p)max1p=x;
        if (x%2!=0 && x > max1i)max1i=x;
    }
    for (int i = n+1; i <= 2*n; i++)
    {
        fin >> x;
        if (x%2==0 && x < min2p)min2p=x;
        if (x%2!=0 && x < min2i)min2i=x;
    }
    if (max1p<min2i && max1i<min2p)cout << "DA";
    else cout << "NU";
}
