#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max_1, max_2, wynik;
    char wyrazenie;
    bool status_ok;
    double wynik_poprawny;

    cout << "Podaj cztery liczby calkowite: \n";
    cin >> a >> b >> c >> d;

    max_1 = a;
    max_2 = b;

    status_ok = true;

    if (b > a)
    {
        max_2 = max_1;
        max_1 = b;
    }

    if (c > max_1)
    {
        max_2 = max_1;
        max_1 = c;
    }
    else if (c > max_2)
    {
        max_2 = c;
    }

    if (d > max_1)
    {
        max_2 = max_1;
        max_1 = d;
    }
    else if (d > max_2)
    {
        max_2 = d;
    }

    cout << "Najwieksza liczba to: " << max_1 << endl;
    cout << "Druga najwieksza liczba to: " << max_2 << "\n";

    cout << "Wybierz typ wyniku:" << endl;
    cout << "Wpisz: a - Wynik obciety" << endl;
    cout << "Wpisz: b - Wynik poprawny \n";
    cin >> wyrazenie;

    if (wyrazenie == 'a')
    {
        if (max_1 - max_2 == 0)
        {
            status_ok = false;
            cout << "max_1 - max_2 rowna sie 0, musi byc rozny od 0" << endl;
        }
        else
        {
            wynik = (max_1 + max_2) / (max_1 - max_2);
        }
    }
    else if (wyrazenie == 'b')
    {
        if (max_1 - max_2 == 0)
        {
            status_ok = false;
            cout << "max_1 - max_2 rowna sie 0, musi byc rozny od 0" << endl;
        }
        else
        {
            wynik_poprawny = (max_1 + max_2) / (1.0 * (max_1 - max_2));
        }
    }
    else
    {
        status_ok = false;
        cout << "Nieprawidlowa litera, ani a ani b nie zastalo wybrane." << endl;
    }

    if (status_ok)
    {
        if (wyrazenie == 'a')
        {
            cout << "Wyniki dzielenia (max_1 + max_2) / (max_1 - max_2) (Wynik obciety): " << wynik << endl;
        }
        else
        {
            cout << "Wyniki dzielenia (max_1 + max_2) / (max_1 - max_2) (Wynik poprawny): " << wynik_poprawny << endl;
        }
    }

    return 0;
}