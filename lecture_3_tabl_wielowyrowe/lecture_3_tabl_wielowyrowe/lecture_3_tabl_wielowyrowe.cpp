#include <iostream>
#include <cstdlib>

using namespace std;

// wykorzystamy sta³e definiuj¹ce zakres tablicowania 
const int x_zakres = 4, y_zakres = 3;

int main()
{

    // bêdziemy wykorzystywali jedn¹ tablicê 
    double tbl[2 * x_zakres + 1][2 * y_zakres + 1];
    // potrzebujemy tak¿e dwu zmiennych na wartoœci ekstremalne
    double v_min, v_max;
    // oraz pomocniczych zmiennych steruj¹cych 
    int i, j;

    cout << "Program tablica_2\n\n";

    // Najpierw wygenerujmy tablicê
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            // nasze x to bêdzie i - x_zakres, podobnie z y
            tbl[i][j] = 0.5 * (i - x_zakres) * (i - x_zakres) - 0.25 * (j - y_zakres)
            + 0.125 * (i - x_zakres) * (j - y_zakres);

    // wydrukujmy wygenerowan¹ tablicê 
    cout << "Wygenerowana tablica:\n";
    for (i = 0; i < 2 * x_zakres + 1; i++)
    {
        for (j = 0; j < 2 * y_zakres + 1; j++)
            cout << tbl[i][j] << "\t";
        cout << endl;
    }

    cout << endl;

    // wyszukajmy wartoœci min i max. Na pocz¹tku zak³adamy ¿e jest to pierwszy
    // element tablicy 
    v_min = tbl[0][0];
    v_max = tbl[0][0];
    // nastêpnie przeszukujemy ca³¹ tablicê w celu odnalezienia ekstremów 
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            if (tbl[i][j] > v_max)
                v_max = tbl[i][j];
            else if (tbl[i][j] < v_min)
                v_min = tbl[i][j];

    // ok, wydrukujmy ekstrema 
    cout << "maksimum = " << v_max << ", minimum = " << v_min << endl << endl;

    // teraz wyzerujmy wszystkie elementy nie bêd¹ce maksimum i minimum
    for (i = 0; i < 2 * x_zakres + 1; i++)
        for (j = 0; j < 2 * y_zakres + 1; j++)
            if (tbl[i][j] != v_max && tbl[i][j] != v_min)
                tbl[i][j] = 0;

    // wydrukujmy koñcow¹ tablicê 
    cout << "Wynikowa tablica:\n";
    for (i = 0; i < 2 * x_zakres + 1; i++)
    {
        for (j = 0; j < 2 * y_zakres + 1; j++)
            cout << tbl[i][j] << "\t";
        cout << endl;
    };

    return 0;
}