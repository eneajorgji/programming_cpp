#include <iostream>
#include <cstdlib>

using namespace std;

//int main()
//{
//    // tym razem deklarujemy jedynie tablic� na 5 znak�w
//    char A[5];
//
//    cout << "Znacznie lepsza pr�ba pisania w odwrotnej kolejnosci\n\n";
//
//    cout << "Wprowadz 5 znak�w: \n";
//
//    // do wczytywania wykorzystamy poznan� wcze�niej p�tl� for: 
//    for (int i = 0; i < 5; i++)
//        cin >> A[i];
//
//    // do wy�wietlenia tablicy tak�e wykorzystamy p�tl� for, tym razem jednak
//    // b�dzie ona bieg�a w odwrotnym kierunku
//    for (int i = 4; i >= 0; i--)
//        cout << A[i] << endl;
//
//    return 0;
//}

// wykorzystamy sta�� w celu okre�lenia ilo�ci wczytywanych liczb 
const int n = 5;
int main()
{
    // b�dziemy wykorzystywali tylko jedn� tablic� i trzy zmienne pomocnicze 
    double a[n];
    int i, i_min, j;
    double temp;
    cout << "Program wektor_3, czyli proste sortowanie\n\n";
    cout << "Wczytywanie danych:\n";
    // najpierw wczytamy ci�g do posortowania 
    for (i = 0; i < n; i++)
    {
        cout << " Podaj " << i << " element ciagu: ";
        cin >> a[i];
    }

    // nast�pnie umie�cimy w�a�ciwy algorytm sortuj�cy 
    // g��wna p�tla musi si� wykona� dok�adnie n - 1 razy 
    for (i = 0; i < n - 1; i++)
    {
        // w ka�dym przebiegu g��wnej p�tli najpierw zak�adamy, �e najmniejszy jest
        //  pierwszy element
        i_min = i;
        // nast�pnie sprawdzamy, czy kt�ry� z nast�pnych element�w nie jest
        //  przypadkiem mniejszy, i  je�li jest, zapami�tujemy jego po�o�enie 
        for (j = i + 1; j < n; j++)
            if (a[j] < a[i_min])
                i_min = j;
        // teraz ju� znamy po�o�enie najmniejszego elementu. Pozostaje nam jedynie
        // zamieni� go miejscami z pocz�tkowym elementem cze�ci nieposortowanej
        // zapami�tujemy ten pocz�tkowy element 
        temp = a[i];
        // umieszczamy w jego miejsce element najmniejszy 
        a[i] = a[i_min];
        // a w to miejsce, gdzie dotychczas umieszczony by� najmniejszy element,
        //  umieszczamy ten, kt�ry by� pierwszym w cz�ci nieposortowanej
        a[i_min] = temp;
    }; // koniec g��wnej p�tli
    // Pozostaje nam jeszcze wydrukowanie posortowanej tablicy 
    for (i = 0; i < n; i++)
        cout << "a[" << i << "] = " << a[i] << endl;

    return 0;
}