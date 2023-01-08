#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    const int W = 5, K = 5, WYDRUK_WIERSZA = W;
    double A[W][K];

    srand(time(0));
    // Punkt A
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < K; j++) {
            //double losowa_liczba = (double)rand() / RAND_MAX * 5.0;
            A[i][j] = (double)rand() / RAND_MAX * 5.0;
        }
    }

    // Punkt B
    cout << "Wydruk tablicy wierszami z ustawiona szerokoscia wydruku W" << endl;
    for (int i = 0; i < W; i++) {
        double suma_wiersza = 0.0;
        for (int j = 0; j < K; j++) {
            cout << setw(WYDRUK_WIERSZA) << setprecision(2) << fixed << A[i][j];
            suma_wiersza += A[i][j];
        }
        double srednia_wiersza = suma_wiersza / (K * 1.0);
        cout << " => Srednia: " << setw(WYDRUK_WIERSZA) << setprecision(2) << fixed << srednia_wiersza << endl;
    }

    // Punkt C
    for (int i = 0; i < W; i++) {
        double suma_wiersza = 0.0;
        for (int j = 0; j < K; j++) {
            suma_wiersza += A[i][j];
        }
        double srednia_wiersza = suma_wiersza / K;
        for (int j = 0; j < K; j++) {
            if (A[i][j] < srednia_wiersza) {
                A[i][j] = srednia_wiersza;
            }
        }
    }

    // Punkt D
    cout << "Ponowny wydruk tablicy (modyfikowana), bez wydrukowania sredniej na koncu kazdego wiersza" << endl;
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < K; j++) {
            cout << setw(WYDRUK_WIERSZA) << setprecision(2) << fixed << A[i][j];
        }
        cout << setw(WYDRUK_WIERSZA) << endl;
    }

    //Punkt E
    cout << "Maksymalna wartosc dla kazdej kolumny" << endl;
    for (int j = 0; j < K; j++) {
        double wartosc_max = A[0][j];
        for (int i = 0; i < W; i++) {
            if (A[i][j] > wartosc_max) {
                wartosc_max = A[i][j];
            }
        }
        cout << setw(WYDRUK_WIERSZA) << setprecision(2) << fixed << wartosc_max;

    }
    return 0;
}