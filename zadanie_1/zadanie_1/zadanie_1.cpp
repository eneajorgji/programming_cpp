#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max_1, max_2, wynik;
    char wyrazenie;

    cout << "Podaj cztery liczby calkowite: \n";
    cin >> a >> b >> c >> d;
    bool status_ok;

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

    cout << "Wybieraj typ wyniku dzielenia" << endl;
    cout << "Wpisz: a - Wynik obciety" << endl;
    cout << "Wpisz: b - Wynik  poprawny" << endl;
    cin >> wyrazenie;

    if (wyrazenie == a)
    {
        if (max_1 - max_2 == 0)
        {
            status_ok = false;
            cout << "max_1 - max_2 wynosi 0" << endl;
        }
        else
        {
            wynik = (max_1 + max_2) / (max_1 + max_2)
        }
    } 
    else if (wyrazenie == b)
    {
        if (max_1 - max_2 == 0)
        {
            status_ok = false;
            cout << "max_1 - max_2 wynosi 0" << endl;
        }
        else
        {
            wynik = (max_1 + max_2) / 1.0 * (max_1 + max_2)
        }
    }
    else
    {
        status_ok = false;
    }

    if (status_ok)
    {
        cout << "Pierwsza wieksza liczba to " << max_1 << endl;
        cout << "Druga wieksza liczba to " << max_2 << endl;
        cout << "Wynik wynosi: " << wynik << endl;
    }

    return 0;
}