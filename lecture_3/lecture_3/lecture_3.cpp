#include <iostream>
#include <cstdlib>

using namespace std;

//int main()
//{
//    // tym razem deklarujemy jedynie tablicê na 5 znaków
//    char A[5];
//
//    cout << "Znacznie lepsza próba pisania w odwrotnej kolejnosci\n\n";
//
//    cout << "Wprowadz 5 znaków: \n";
//
//    // do wczytywania wykorzystamy poznan¹ wczeœniej pêtlê for: 
//    for (int i = 0; i < 5; i++)
//        cin >> A[i];
//
//    // do wyœwietlenia tablicy tak¿e wykorzystamy pêtlê for, tym razem jednak
//    // bêdzie ona bieg³a w odwrotnym kierunku
//    for (int i = 4; i >= 0; i--)
//        cout << A[i] << endl;
//
//    return 0;
//}

// wykorzystamy sta³¹ w celu okreœlenia iloœci wczytywanych liczb 
const int n = 5;
int main()
{
    // bêdziemy wykorzystywali tylko jedn¹ tablicê i trzy zmienne pomocnicze 
    double a[n];
    int i, i_min, j;
    double temp;
    cout << "Program wektor_3, czyli proste sortowanie\n\n";
    cout << "Wczytywanie danych:\n";
    // najpierw wczytamy ci¹g do posortowania 
    for (i = 0; i < n; i++)
    {
        cout << " Podaj " << i << " element ciagu: ";
        cin >> a[i];
    }

    // nastêpnie umieœcimy w³aœciwy algorytm sortuj¹cy 
    // g³ówna pêtla musi siê wykonaæ dok³adnie n - 1 razy 
    for (i = 0; i < n - 1; i++)
    {
        // w ka¿dym przebiegu g³ównej pêtli najpierw zak³adamy, ¿e najmniejszy jest
        //  pierwszy element
        i_min = i;
        // nastêpnie sprawdzamy, czy któryœ z nastêpnych elementów nie jest
        //  przypadkiem mniejszy, i  jeœli jest, zapamiêtujemy jego po³o¿enie 
        for (j = i + 1; j < n; j++)
            if (a[j] < a[i_min])
                i_min = j;
        // teraz ju¿ znamy po³o¿enie najmniejszego elementu. Pozostaje nam jedynie
        // zamieniæ go miejscami z pocz¹tkowym elementem czeœci nieposortowanej
        // zapamiêtujemy ten pocz¹tkowy element 
        temp = a[i];
        // umieszczamy w jego miejsce element najmniejszy 
        a[i] = a[i_min];
        // a w to miejsce, gdzie dotychczas umieszczony by³ najmniejszy element,
        //  umieszczamy ten, który by³ pierwszym w czêœci nieposortowanej
        a[i_min] = temp;
    }; // koniec g³ównej pêtli
    // Pozostaje nam jeszcze wydrukowanie posortowanej tablicy 
    for (i = 0; i < n; i++)
        cout << "a[" << i << "] = " << a[i] << endl;

    return 0;
}