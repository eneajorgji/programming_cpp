#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    // Zmienne takie same jak w poprzednim przyk�adzie, przy czym nie 
    // trzeba inicjowa� zmiennej i - tym zajmie si� konstrukcja p�tli  
    int i, potega = 1;
    // rozpoczynamy p�tl� 
    for (i = 0; i <= 10; i++)
    {
        // wypisujemy aktualn� pot�g�
        cout << "2 ^ " << i << " = " << potega << endl;
        // i obliczamy nast�pn� pot�g� 
        potega = potega * 2;
    }

    return 0;
}