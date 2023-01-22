#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const int w = 6, k = 5;

void Losuj_znaki(char tablica[w][k], char poczatek, char koniec) {

    srand(time(0));
    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            tablica[i][j] = poczatek + rand() % (koniec - poczatek + 1);
        }
    }
}

void Wydrukuj_tablice_zn(char tablica[w][k]) {
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << tablica[w][k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Hello World!\n";
    cout << endl;

    char Cy[w][k];
    Losuj_znaki(Cy, 'A', 'K');
    Wydrukuj_tablice_zn(Cy);
}