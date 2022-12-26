#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // tym razem deklarujemy jedynie tablicê na 5 znaków
    char A[5];

    cout << "Znacznie lepsza próba pisania w odwrotnej kolejnosci\n\n";

    cout << "Wprowadz 5 znaków: \n";

    // do wczytywania wykorzystamy poznan¹ wczeœniej pêtlê for: 
    for (int i = 0; i < 5; i++)
        cin >> A[i];

    // do wyœwietlenia tablicy tak¿e wykorzystamy pêtlê for, tym razem jednak
    // bêdzie ona bieg³a w odwrotnym kierunku
    for (int i = 4; i >= 0; i--)
        cout << A[i] << endl;

    return 0;
}