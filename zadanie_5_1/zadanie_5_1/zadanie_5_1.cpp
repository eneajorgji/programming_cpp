#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main()
{
    const int n = 10, P = 2, D = 6;
    double C = 11.5;
    double A[n][n];
    ifstream plk_we("daneR.txt");

    //tablica z elementami C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = C;
        }
    }

    // load date from file
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!plk_we.eof()) {
                plk_we >> A[i][j];
            }
        }
    }

    //wydruk elementow tablicy
    cout << "Tablica podstawowa: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(D) << fixed << setprecision(P) << A[i][j] << " ";
        }
        cout << endl;
    }
    
    //3. najmniejsza liczba na glownej przekatnej, dopisac ja do calego wiersza
    double mniejsza_przekatna = A[0][0];
    int najmniejsza_przekatna_wiersz = 0;
    for (int i = 0; i < n; i++) {
        if (A[i][i] < mniejsza_przekatna) {
            mniejsza_przekatna = A[i][i];
            najmniejsza_przekatna_wiersz = i;
        }
    }
    for (int i = 0; i < n; i++) {
        A[najmniejsza_przekatna_wiersz][i] = mniejsza_przekatna;
    }
    // ---------------------------------------------------------------- //
    //4. zamienic miejscami skrajne elementy na drugiej przekatnej
    double tmp = A[0][n - 1];
    A[0][n - 1] = A[n - 1][0];
    A[n - 1][0] = tmp;

    //5. wykrud modyfiwkowanej tablicy
    cout << "Modyfikowana tablica" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(D) << fixed << setprecision(P) << A[i][j] << " ";
        }
        cout << endl;
    }

    string nazwa_plk_wy;

    cout << "Podaj nazwe pliku: ";
    cin >> nazwa_plk_wy;

    ofstream plk_wy(nazwa_plk_wy);
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n; j++) {
            plk_wy << setw(D) << fixed << setprecision(P) << A[i][i] << " ";
        }
        plk_wy << endl;
    }
    plk_wy.close();

    return 0;
}