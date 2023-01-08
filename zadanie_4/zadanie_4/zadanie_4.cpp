#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    const int W = 2, K = 5, wydruk_wiersz = W;
    double suma_wiersza = 0.0;
    double A[W][K];

    srand(time(0));

    for (int i = 0; i < W; i++) {
        for (int j = 0; j < K; j++) {
            //double losowa_liczba = (double)rand() / RAND_MAX * 5.0;
            A[i][j] = (double)rand() / RAND_MAX * 5.0;
        }
    }

    // wydruk tablicy 
    for (int i = 0; i < W; i++) {
        
        for (int j = 0; j < K; j++) {
            cout << setw(wydruk_wiersz) << setprecision(2) << fixed << A[i][j];
            suma_wiersza += A[i][j];
        }
        double srednia_wiersza = suma_wiersza / (K * 1.0);
        cout << " => Scrednia: " << setw(wydruk_wiersz) << setprecision(2) << fixed << srednia_wiersza << endl;
    }

    // wymien oceny mniejsze niz srednia, z srednia wiersza
    /*for (int i = 0; i < W; i++) {
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
    }*/

    // wydrukuje
    /*for (int i = 0; i < W; i++) {
        for (int j = 0; j < K; j++) {
            cout << setw(wydruk_wiersz) << setprecision(2) << fixed << A[i][j];
        }
    }*/
    return 0;
}