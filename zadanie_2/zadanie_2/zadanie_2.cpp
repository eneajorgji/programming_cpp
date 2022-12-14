#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int D = 5;
    int pierwsza_wprowadzona = 0, liczba_calkowita = 0, najwieksza_liczba = 0, ilosc_jednocyfrowych = 0, suma_jednocyfrowych = 0, wieksze_liczby = 0;
    double srednia_jednocyfrowych = 0;
    bool pierwsza = true;

    do {
        cout << "Wprowadz liczbe: ";
        cin >> liczba_calkowita;

        if (liczba_calkowita > najwieksza_liczba || pierwsza == true) {
            najwieksza_liczba = liczba_calkowita;
        }

        if (liczba_calkowita >= -9 && liczba_calkowita <= 9) {
            suma_jednocyfrowych += liczba_calkowita;
            ilosc_jednocyfrowych++;
        }

        if (pierwsza == true) {
            pierwsza_wprowadzona = liczba_calkowita;
            pierwsza = false;
        }

        if (liczba_calkowita > pierwsza_wprowadzona) {
            wieksze_liczby++;
        }

        pierwsza_wprowadzona = liczba_calkowita;

    } while (liczba_calkowita % D != 0);
    cout << "Najwieksza liczba: " << najwieksza_liczba << endl;
    
    
    if (ilosc_jednocyfrowych == 0) {
        cout << "Nie wprowadzono zadnej liczby jendocyfrowej." << endl;
    } 
    else {
        srednia_jednocyfrowych = double(suma_jednocyfrowych) / ilosc_jednocyfrowych;
        cout << "Srednia liczb jednocyfrowych: " << srednia_jednocyfrowych << endl;
    }

    cout << "Ilosc wiekszych liczb od poprzednika: " << wieksze_liczby << endl;
    return 0;
}