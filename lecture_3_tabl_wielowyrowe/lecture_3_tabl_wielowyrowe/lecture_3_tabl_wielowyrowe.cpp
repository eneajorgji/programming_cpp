#include <iostream>
#include <cstdlib>

using namespace std;

// wykorzystamy sta�e definiuj�ce zakres tablicowania 
const int x_zakres = 4, y_zakres = 3;

int main()
{

    // b�dziemy wykorzystywali jedn� tablic� 
    double tbl[2 * x_zakres + 1][2 * y_zakres + 1];
    // potrzebujemy tak�e dwu zmiennych na warto�ci ekstremalne
    double v_min, v_max;
    // oraz pomocniczych zmiennych steruj�cych 
    int i, j;

    cout << "Program tablica_2\n\n";

    // Najpierw wygenerujmy tablic�
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            // nasze x to b�dzie i - x_zakres, podobnie z y
            tbl[i][j] = 0.5 * (i - x_zakres) * (i - x_zakres) - 0.25 * (j - y_zakres)
            + 0.125 * (i - x_zakres) * (j - y_zakres);

    // wydrukujmy wygenerowan� tablic� 
    cout << "Wygenerowana tablica:\n";
    for (i = 0; i < 2 * x_zakres + 1; i++)
    {
        for (j = 0; j < 2 * y_zakres + 1; j++)
            cout << tbl[i][j] << "\t";
        cout << endl;
    }

    cout << endl;

    // wyszukajmy warto�ci min i max. Na pocz�tku zak�adamy �e jest to pierwszy
    // element tablicy 
    v_min = tbl[0][0];
    v_max = tbl[0][0];
    // nast�pnie przeszukujemy ca�� tablic� w celu odnalezienia ekstrem�w 
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            if (tbl[i][j] > v_max)
                v_max = tbl[i][j];
            else if (tbl[i][j] < v_min)
                v_min = tbl[i][j];

    // ok, wydrukujmy ekstrema 
    cout << "maksimum = " << v_max << ", minimum = " << v_min << endl << endl;

    // teraz wyzerujmy wszystkie elementy nie b�d�ce maksimum i minimum
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            if (tbl[i][j] != v_max && tbl[i][j] != v_min)
                tbl[i][j] = 0;

    // wydrukujmy ko�cow� tablic� 
    cout << "Wynikowa tablica:\n";
    for (i = 0; i < 2 * x_zakres + 1; i++)
    {
        for (j = 0; j < 2 * y_zakres + 1; j++)
            cout << tbl[i][j] << "\t";
        cout << endl;
    };

    return 0;
}