#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int w = 5, k = 10;

void Losuj_litery_cyfry(char tablica[w][k], char poczatek, char koniec) {

    srand(time(0));
    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            int zakres = (koniec - poczatek) + 1;
            char los_znak = poczatek + rand() % zakres;
            tablica[i][j] = toupper(los_znak);
        }
    }
}

void Wydrukuj_tablice(char tablica[w][k]) {
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Wypelniec_brak_P(char tablica[w][k]) {
    for (int i = 0; i < w; i++) {
        bool istnieje_P = false;
        for (int j = 0; j < k; j++) {
            if (tablica[i][j] == 'P') {
                istnieje_P = true;
                break;
            }
        }
        if (!istnieje_P) {
            for (int j = 0; j < k; j++) {
                tablica[i][j] = '%';
            }
        }
    }
}

void Wypelniec_brak_5(char tablica[w][k]) {
    for (int i = 0; i < w; i++) {
        bool istnieje_5 = false;
        for (int j = 0; j < k; j++) {
            if (tablica[i][j] == '5') {
                istnieje_5 = true;
                break;
            }
        }
        if (!istnieje_5) {
            for (int j = 0; j < k; j++) {
                tablica[i][j] = '&';
            }
        }
    }
}

int main()
{
    // --- Litery --- //
    char Li[w][k];
    cout << "Tablica liter" << endl;
    Losuj_litery_cyfry(Li,'a','r');
    Wydrukuj_tablice(Li);

    cout << "Tablica liter po zmianach" << endl;
    Wypelniec_brak_P(Li);
    Wydrukuj_tablice(Li);

    // --- Cyfry --- //
    char Cy[w][k];
    cout << "Tablica cyfer" << endl;
    Losuj_litery_cyfry(Cy, '0', '5');
    Wydrukuj_tablice(Cy);
    
    cout << "Tablica cyfer po zmianach" << endl;
    Wypelniec_brak_5(Cy);
    Wydrukuj_tablice(Cy);
}