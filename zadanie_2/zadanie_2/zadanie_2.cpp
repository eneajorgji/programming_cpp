#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int D = 5;
    int liczba_calk, liczba_max, pierwsza_wprowadzona_liczba, suma_jednocyfr = 0, ilosc_jednocyfr = 0, wieksze_od_poprzednika = 0;
    double srednia;
    bool pierwsza_wprowadzona = true;

    cout << "Wprowadz liczbe: ";
    cin >> pierwsza_wprowadzona_liczba;

    liczba_max = pierwsza_wprowadzona_liczba;

    do {
        cout << "Wprowadz liczbe: ";
        cin >> liczba_calk;

        if (liczba_calk > liczba_max) {
            liczba_max = liczba_calk;
            wieksze_od_poprzednika++;
        }

        if ((pierwsza_wprowadzona_liczba >= -9 && pierwsza_wprowadzona_liczba <= 9) && (pierwsza_wprowadzona == true)) {
            suma_jednocyfr += pierwsza_wprowadzona_liczba;
            ilosc_jednocyfr++;
            pierwsza_wprowadzona = false;
        }

        if (liczba_calk >= -9 && liczba_calk <= 9) {
            suma_jednocyfr += liczba_calk;
            ilosc_jednocyfr++;
        }

    } while (liczba_calk % D != 0);

    cout << "Najwieksza liczba: " << liczba_max << endl;
    srednia = suma_jednocyfr / (1.0 * ilosc_jednocyfr);
    cout << "Srednia liczb jednocyfrowych: " << srednia << endl;
    cout << "Ilosc wiekszych liczb od poprzednika: " << wieksze_od_poprzednika << endl;
    return 0;
}
