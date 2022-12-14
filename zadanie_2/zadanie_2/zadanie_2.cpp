#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int D = 5;
    int liczba_calk, liczba_max, first_entered_num, suma_jednocyfr=0, ilosc_jednocyfr=0;

    cout << "Wprowadz liczbe: ";
    cin >> first_entered_num;

    liczba_max = first_entered_num;

    if (first_entered_num >= -9 && first_entered_num <= 9) {
        suma_jednocyfr = suma_jednocyfr + first_entered_num;
        ilosc_jednocyfr = ilosc_jednocyfr + 1;
    }

    do {
        cout << "Wprowadz liczbe: ";        
        cin >> liczba_calk;

        // najwieksza liczba 
        if (liczba_calk > liczba_max) {
            liczba_max = liczba_calk;
            // tu dodaj wiekszych od swoixh porzpedników

        }

        // wyszukanie sk³adowych do œredniej liczb jednocyfrowych 
        if (liczba_calk >= -9 && liczba_calk <= 9) {
            suma_jednocyfr = suma_jednocyfr + liczba_calk;
            ilosc_jednocyfr = ilosc_jednocyfr + 1;
        }

        // ilosc liczb wiekszych od swojego poprzednika


    } while (liczba_calk % D != 0);
    

    cout << "Najwieksza liczba: " << liczba_max << endl;
    
    cout << "Suma jednocyfrowych: " << suma_jednocyfr << endl;
    cout << "Ilosc jednocyfrowych: " << ilosc_jednocyfr << endl;


    return 0;
}