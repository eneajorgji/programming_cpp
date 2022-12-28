#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX = 100;
const int N = 4;

int main() {
    int k, m = 0, suma = 0;
    string tmp_napis;
    string tnapis[MAX];

    char tablica_c[N];

    // podpunkt A
    do {
        cout << "Wprowadz liczbe calkowita k: " << endl;
        cin >> k;
    } while (k < 0 && k >= 9);

    // podpunkt B
    for (int i = 0; i < k; i++) {
        cout << "Wprowadz napis nr " << i + 1 << " z " << k << endl;
        cin >> tnapis[i];
        tmp_napis = tnapis[i];
        if (tmp_napis[tmp_napis.length()] = tmp_napis[0]) {
            suma = suma + tmp_napis.length();
            m++;
        }
    }
    cout << "Srednia: " << 1.0 * suma / m << endl;

    // podpunkt C
/*
    for (int i = 0; i < N; i++){
        cout << "Wprowadz "<< i + 1 << " element tablicy" << endl;
        cin>>tablica_c[i];
    }

    for(int i = 0; i < N; i++){
        cout << tablica_c[i]<<" ";
    }
*/
    for (int i = 0; i < N; i++) {
        cout << "Wprowadz " << i + 1 << " element tablicy" << endl;
        cin >> tablica_c[i];
    }

    cout << "Drukuj tablica_c: " << tablica_c;

    for (int cykl = 0; cykl < N; cykl++) {
        char temp = tablica_c[N - 1]; //zapisuje ostatnie element

        for (int i = (N - 1); i >= 0; i--) {
            tablica_c[i] = tablica_c[i - 1];
        }
        tablica_c[0] = temp;

        for (int i = 0; i < N; i++) {
            cout << tablica_c[i] << " ";
        }
        cout << endl;
    }

    return 0;
}