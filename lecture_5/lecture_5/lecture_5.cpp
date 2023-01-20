#include <iostream>
#include <cstdlib>

using namespace std;

// d³ugoœæ tablicy punktów 
const int n = 6;

// pomocnicza funkcja wykorzystywana przez nasz program
void czytaj_i_pisz(int dlugosc)
{
    // tablica teraz bêdzie nam potrzebna jedynie wewn¹trz funkcji
    int t[n];

    // wczytanie ci¹gu 
    cout << "******************************\n";
    cout << "Podaj " << dlugosc << " liczb:\n";
    for (int i = 0; i < dlugosc; i++)
    {
        cout << " Liczba " << i + 1 << " : ";
        cin >> t[i];
    };
    // wydruk w odwrotnej kolejnoœci 
    cout << "\nCiag w odwrotnej kolejnosci:\n";
    for (int i = dlugosc - 1; i >= 0; i--)
        cout << " Liczba " << i + 1 << " : " << t[i] << endl;
};

int main(int argc, char* argv[])
{
    cout << "Program procedury_2\n\n";


    // Pierwszy ci¹g o 5 liczbach 
    czytaj_i_pisz(5);

    // Drugi o 6 liczbach 
    czytaj_i_pisz(6);

    // i trzeci o 3 liczbach 
    czytaj_i_pisz(3);


    return 0;
}