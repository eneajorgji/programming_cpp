#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Program for_3, drukujacy znaki pomiedzy 'A' i 'z'\n\n";
    // P�tla drukuj�ca - tym razem jako zmienn� steruj�c� zastosujemy
    // zmienn� typu char
    for (char zn = 'A'; zn <= 'z'; zn++)
        cout << zn;

    cout << endl;

    return 0;
}