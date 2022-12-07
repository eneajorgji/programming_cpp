#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    int max_1 = a, max_2 = b;

    cout << "Podaj cztery liczby calkowite: \n";
    cin >> a >> b >> c >> d;

    if (b > a)
    {

    }
/*
    if (a > b)
    {
        max_1 = a;
        max_2 = b;
        cout << "Pierwsza wieksza liczba to " << max_1 << endl;
        cout << "Druga wieksza liczba to " << max_2 << endl;
    }
    else
    {
        max_1 = b;
        max_2 = a;
        cout << "Pierwsza wieksza liczba to " << max_1 << endl;
        cout << "Druga wieksza liczba to " << max_2 << endl;
    }
*/

    if (c > max_1)
    {
        max_2 = max_1;
        max_1 = c;
        cout << "Pierwsza wieksza liczba to " << max_1 << endl;
        cout << "Druga wieksza liczba to " << max_2 << endl;
    }
    else if (d > max_1)
    {
        max_2 = max_1;
        max_1 = d;
        cout << "Pierwsza wieksza liczba to " << max_1 << endl;
        cout << "Druga wieksza liczba to " << max_2 << endl;
    }


    return 0;
}