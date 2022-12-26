#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    // Zmienne takie same jak w poprzednim przyk³adzie, przy czym nie 
    // trzeba inicjowaæ zmiennej i - tym zajmie siê konstrukcja pêtli  
    int i, potega = 1;
    // rozpoczynamy pêtlê 
    for (i = 0; i <= 10; i++)
    {
        // wypisujemy aktualn¹ potêgê
        cout << "2 ^ " << i << " = " << potega << endl;
        // i obliczamy nastêpn¹ potêgê 
        potega = potega * 2;
    }

    return 0;
}