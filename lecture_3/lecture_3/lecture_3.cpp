#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // tym razem deklarujemy jedynie tablic� na 5 znak�w
    char A[5];

    cout << "Znacznie lepsza pr�ba pisania w odwrotnej kolejnosci\n\n";

    cout << "Wprowadz 5 znak�w: \n";

    // do wczytywania wykorzystamy poznan� wcze�niej p�tl� for: 
    for (int i = 0; i < 5; i++)
        cin >> A[i];

    // do wy�wietlenia tablicy tak�e wykorzystamy p�tl� for, tym razem jednak
    // b�dzie ona bieg�a w odwrotnym kierunku
    for (int i = 4; i >= 0; i--)
        cout << A[i] << endl;

    return 0;
}