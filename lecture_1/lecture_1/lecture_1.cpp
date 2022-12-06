/*
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    const int a = -5;
    int l1;
    cout << "wpisz liczbe: ";
    cin >> l1;
    cout << "liczba l1 jest: " << endl;

    if (a > 0) 
        cout << a << endl; 
    else 
        cout << "zmieniamy znak: ";
        cout << -a;

    return 0;
} */


#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
    // Deklarujemy jedn¹ zmienn¹ zawieraj¹c¹ obrabian¹ liczbê 
    int l1;
    cout << "Program jesli_2 obliczajacy wartosc bezwzgledna liczby\n\n";

    // Poprosimy u¿ytkownika o wprowadzenie liczby 
    cout << "Wpisz jakas liczbe calkowita : ";
    cin >> l1;
    // sprawdzimy, czy jest ona ujemna 
    if (l1 < 0)
    {
        // otwieraj¹c ten nawias klamrowy informujemy, ¿e jeœli warunek jest prawdziwy, 
        // to bêdzie wykonywana wiêcej ni¿ jedna instrukcja. Dziêki temu mo¿emy 
        // najpierw wypisaæ informacjê o zmianie znaku
        cout << "Wprowadziles liczbe ujemna. Nastapi zmiana jej znaku\n";
        // nastêpnie podstawienie wartoœci ze zmienionym znakiem. 
        l1 = -l1;
    }
    // No i wyœwietlenie wyniku 
    cout << "Wartosc bezwzgledna: " << l1 << endl;
    return 0;
}