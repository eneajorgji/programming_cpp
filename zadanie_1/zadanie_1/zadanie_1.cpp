#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max_1, max_2;

    cout << "Podaj cztery liczby calkowite: \n";
    cin >> a >> b >> c >> d;

    max_1 = a;
    max_2 = b;

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
    if (d > max_1)
    {
        max_2 = max_1;
        max_1 = d;
    }
    else if (d > max_2)
    {
        max_2 = d;
    }

    cout << "Pierwsza wieksza liczba to " << max_1 << endl;
    cout << "Druga wieksza liczba to " << max_2 << endl;
    
    return 0;
}