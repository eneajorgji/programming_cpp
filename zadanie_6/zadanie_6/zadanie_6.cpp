#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <iomanip>

using namespace std;

struct Sstudent
{
    char inicjal_1, inicjal_2;
    double ocena;
};

int main()
{
    //zmienne
    const double G = 5.0; //maksymalna ocena
    const int w = 4, k = 4;

    Sstudent A[w][k];

    srand(time(0));

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            A[i][j].inicjal_1 = static_cast<char>('A' + rand() % 26);
            A[i][j].inicjal_2 = static_cast<char>('A' + rand() % 26);
            A[i][j].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
        }
    }

    // print the updated records
    cout << "Tablica podstawowa" << endl;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << A[i][j].inicjal_1 << A[i][j].inicjal_2 << " " << fixed << setprecision(2) << A[i][j].ocena << " ";
        }
        cout << endl;
    }

    //zmienne, lepsze, gorszego stud
    double najwieksza_ocena = A[0][0].ocena, najmniejsza_ocena = A[1][1].ocena;
    int pozycja_obwod_x = 0, pozycja_obwod_y = 0, pozycja_wewnatrz_x = 1, pozycja_wewnatrz_y = 1;

    //szukanie nejlepszej oceny
    for (int i = 0; i <= w - 1; i++) {
        if (A[0][i].ocena > najwieksza_ocena) {
            najwieksza_ocena = A[0][i].ocena;
            pozycja_obwod_x = 0;
            pozycja_obwod_y = i;

        }
        if (A[w - 1][i].ocena > najwieksza_ocena) {
            najwieksza_ocena = A[w - 1][i].ocena;
            pozycja_obwod_x = w - 1;
            pozycja_obwod_y = i;
        }
    }
    for (int i = 1; i <= w - 2; i++) {
        if (A[i][0].ocena > najwieksza_ocena) {
            najwieksza_ocena = A[i][0].ocena;
            pozycja_obwod_x = i;
            pozycja_obwod_y = 0;
        }

        if (A[i][w - 1].ocena > najwieksza_ocena) {
            najwieksza_ocena = A[i][w - 1].ocena;
            pozycja_obwod_x = i;
            pozycja_obwod_y = w - 1;
        }

    }
    //szukanie najgorszej oceny
    for (int i = 1; i <= w - 2; i++) {
        for (int j = 1; j <= k - 2; j++) {
            if (A[i][j].ocena < najmniejsza_ocena) {
                najmniejsza_ocena = A[i][j].ocena;
                pozycja_wewnatrz_x = i;
                pozycja_wewnatrz_y = j;
            }
        }
    }

    cout << "Najlepsza ocena (na obwodzie): " << najwieksza_ocena << ", znajduje sie w: " << pozycja_obwod_x << ", " << pozycja_obwod_y << endl;
    cout << "Najgorsza ocena (wewnatrz): " << najmniejsza_ocena << ", znajduje sie w: " << pozycja_wewnatrz_x << ", " << pozycja_wewnatrz_y << endl;

    //zmiana miejsc
    Sstudent tmp = A[pozycja_obwod_x][pozycja_obwod_y];
    A[pozycja_obwod_x][pozycja_obwod_y] = A[pozycja_wewnatrz_x][pozycja_wewnatrz_y];
    A[pozycja_wewnatrz_x][pozycja_wewnatrz_y] = tmp;

    // print the updated records
    cout << "Tablica po zmianach" << endl;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << A[i][j].inicjal_1 << A[i][j].inicjal_2 << " " << fixed << setprecision(2) << A[i][j].ocena << " ";
        }
        cout << endl;
    }
    
    return 0;
}