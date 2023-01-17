#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main()
{
    /*ifstream plk_we;
    string bufor;

    plk_we.open("dane.txt");

    if (!plk_we.is_open()) {
        cout << "Blad otwarcia pliku" << endl;
        return 1;
    }
    else {
        cout << "Plik zostal wczytany" << endl;
    }

    while (!plk_we.eof()) {
        getline(plk_we, bufor);
        cout << bufor << endl;
    }

    plk_we.close();*/

    const int n = 10, C = 11.1, P = 2, D = 6;
    int A[n][n];

    //tablica z elementami C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = C;
        }
    }

    ifstream file("daneR.txt");
    string wiersz;
    int i = 0, j = 0;

    // load date from file
    while (getline(file, wiersz)) {
        istringstream iss(wiersz);
        double temp;
        while (iss >> temp) {
            A[i][j] = temp;
            j++;
        }
        while (j < n) {
            A[i][j] = C;
            j++;
        }
        i++;
        j = 0;
    }

    while (i < n) {
        while (j < n) {
            A[i][j] = C;
            j++;
        }
        i++;
        j = 0;
    }

    //wydruk elementow tablicy
    cout << "Tablica podstawowe: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(D) << fixed << setprecision(P) << A[i][j] << " ";
        }
        cout << endl;
    }
    
    //najmniejsza liczba pierwszej digonali



    return 0;
}