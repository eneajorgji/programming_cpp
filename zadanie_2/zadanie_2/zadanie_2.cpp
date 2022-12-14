#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int D = 5;
    int tmp1 = 0, tmp2 = 0, najwieszka_liczba = 0, ilosc_jednocyfrowych = 0, suma_jednocyfrowych = 0, wieksze_liczby = 0;
    double avg = 0;
    bool pierwsza = true;

    do {
        cout << "Wprowadz liczbe:";
        cin >> tmp2;

        // wyszukanie maxymalnej wprowadzonej liczby
        if (tmp2 > najwieszka_liczba || pierwsza == true) {
            najwieszka_liczba = tmp2;
        }

        // wyszukanie sk³adowych do œredniej liczb jednocyfrowych 
        if (tmp2 >= -9 && tmp2 <= 9) {
            suma_jednocyfrowych += tmp2;
            ilosc_jednocyfrowych++;
        }

        // sprawdzenie czy ju¿ by³a wprowadzona jaka liczba
        if (pierwsza == true) {
            tmp1 = tmp2;
            pierwsza = false;
        }

        // zliczanie liczb wiêkszych od poprzednika 
        if (tmp2 > tmp1) {
            wieksze_liczby++;
        }

        //zachowanie ostatnio wprowadzonej liczby przed nastêpnym wprowadzeniem
        tmp1 = tmp2;

    } while (tmp2 % D != 0);
    cout << "Najwieksza liczba: " << najwieszka_liczba << endl;
    avg = double(suma_jednocyfrowych) / ilosc_jednocyfrowych;
    if (ilosc_jednocyfrowych == 0) {
        cout << "Nie ma zadnej liczby jednocyfrowej." << end;
    }
    else {
        cout << "Srednia liczb jednocyfrowych: " << avg << endl;
    }
    cout << "Ilosc wiekszych liczb od poprzednika: " << wieksze_liczby << endl;
    return 0;
}