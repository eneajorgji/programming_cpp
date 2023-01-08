#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Program for_3, drukujacy znaki pomiedzy 'A' i 'z'\n\n";
    // Pêtla drukuj¹ca - tym razem jako zmienn¹ steruj¹c¹ zastosujemy
    // zmienn¹ typu char
    for (char zn = 'A'; zn <= 'z'; zn++)
        cout << zn;

    cout << endl;

    return 0;
}