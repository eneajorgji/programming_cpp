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

    // zadeklarujemy zmienn¹ typu Sstudent: 
    Sstudent A[w][k];

    //generator losowania
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

    //3. znalezc lepszego 
    double MAX = A[0][0].ocena, MIN = A[1][1].ocena;
    int pozycja_obwod_x = 0, pozycja_obwod_y = 0, pozycja_wewnatrz_x = 1, pozycja_wewnatrz_y = 1;

    //szukanie maxa
    for (int i = 0; i < w - 1; i++) {
        if (A[0][i].ocena > MAX) {
            MAX = A[0][i].ocena;
            pozycja_obwod_x = i;
            pozycja_obwod_y = 0;

        }
        if (A[w - 1][i].ocena > MAX) {
            MAX = A[w - 1][i].ocena;
            pozycja_obwod_x = i;
            pozycja_obwod_y = w - 1;
        }
    }
    for (int i = 1; i < w - 2; i++) {
        if (A[i][0].ocena > MAX) {
            MAX = A[i][0].ocena;
            pozycja_obwod_x = 0;
            pozycja_obwod_y = i;
        }

        if (A[i][w - 1].ocena > MAX) {
            MAX = A[i][w - 1].ocena;
            pozycja_obwod_x = w - 1;
            pozycja_obwod_y = i;
        }

    }
    //szukania min
    for (int i = 1; i <= w - 2; i++) {
        for (int j = 1; j <= k - 2; j++) {
            if (A[i][j].ocena < MIN) {
                MIN = A[i][j].ocena;
                pozycja_wewnatrz_x = i;
                pozycja_wewnatrz_y = j;
            }

        }
    }

    cout << "Najlepszy studenta na obwodzie: " << MAX << ", znajduje sie w: " << pozycja_obwod_x << ", " << pozycja_obwod_y << endl;
    cout << "Najlepszy studenta na obwodzie: " << MIN << ", znajduje sie w: " << pozycja_wewnatrz_x << ", " << pozycja_wewnatrz_y << endl;

    //zmiana miejsc
    Sstudent tmp = A[pozycja_obwod_x][pozycja_obwod_y];
    A[pozycja_obwod_x][pozycja_obwod_y] = A[pozycja_wewnatrz_x][pozycja_wewnatrz_y];
    A[pozycja_wewnatrz_x][pozycja_wewnatrz_y] = tmp;

    
    /*double najlepszy_student_obw = 0.0, najgorszy_student_wew = G;
    int najlpeszy_X, najlepszy_Y, najgorszy_X, najgorszy_Y;
    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            if (i == 0 || i == w - 1 || j == 0 || j == k - 1) {
                if (A[i][j].ocena > najlepszy_student_obw) {
                    najlepszy_student_obw = A[i][j].ocena;
                    najlpeszy_X = i;
                    najlepszy_Y = j;
                }
            }
            else {
                if (A[i][j].ocena < najgorszy_student_wew) {
                    najgorszy_student_wew = A[i][j].ocena;
                    najgorszy_X = i;
                    najgorszy_Y = j;
                }
            }
        }
    }
    cout << "Najlepszy student jest w: " << najlpeszy_X << " " << najgorszy_Y << endl;
    cout << "Najgorszy student jest w: " << najgorszy_X << " " << najgorszy_Y << endl;*/

    //zmiana miejsc najlepszy z najgorszym 
    /*Sstudent tmp = A[najlpeszy_X][najlepszy_Y];
    A[najlpeszy_X][najlepszy_Y] = A[najgorszy_X][najgorszy_Y];
    A[najgorszy_X][najgorszy_Y] = tmp;*/


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