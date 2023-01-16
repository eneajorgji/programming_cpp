#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream plk_we;

    //plk_we.open("daneR1txt");

    plk_we.open("C:\\Users\\jorgj\\OneDrive\\Documents\\B.Eng.SC\\5. Semestr - PS 2\\1. Programowanie\\zadania_z_wykladow\\zadanie_5s\\zadanie_5\\daneEJ.txt");
    if (!plk_we.is_open()) {
        cout << "Blad otwarcia pliku" << endl;
        return 1;
    }
    else {
        cout << "Plik zostal wczytany" << endl;
    }

    return 0;
}