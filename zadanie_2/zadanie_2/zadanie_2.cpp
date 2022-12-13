#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int D = 5;
    int liczba_calk;

    do {
        cout << "Wprowadz liczbe: ";
        cin >> liczba_calk;

    } while (liczba_calk % D != 0)
    
    return 0;
}