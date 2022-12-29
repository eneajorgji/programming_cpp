#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int k, m = 0, suma = 0;
    const int MAX = 100, N = 4;
    string tmp_napis, tnapis[MAX];
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
        if (tmp_napis[0] = tmp_napis[tmp_napis.length() - 1]) {
            suma = suma + tmp_napis.length();
            m++;
        }

        /*if (tmp_napis[tmp_napis.size() -1] == tmp_napis[0]) {
            suma = suma + tmp_napis.size();
            m++;
        }*/
    }

    if (suma != 0) {
        cout << "Srednia: " << 1.0 * suma / m << endl;
    }
    else {
        cout << "Nie podano napisu" << endl;
    }
    

    // podpunkt C
    for (int i = 0; i < N; i++) {
        cout << "Wprowadz " << i + 1 << " element tablicy" << endl;
        cin >> tablica_c[i];
    }

    cout << "Drukuj tablica_c: " << tablica_c;
    cout << endl;

    for (int cykl = 0; cykl < N; cykl++) {

        cout << "Cykl " << cykl << ": ";

        for (int i = 0; i < N; i++) {
            cout << tablica_c[i] << " ";
        }
        cout << endl;

        char temp = tablica_c[N-1];

        for (int i = N-1; i > 0; i--) {
            tablica_c[i] = tablica_c[i-1];
        }
      
        tablica_c[0] = temp;   
    }
    return 0;
}