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

void losowanie(Sstudent A[], int n) {
    const double G = 5.0;
    //srand(time(0));

    for (int i = 0; i < n; i++) {
        A[i].inicjal_1 = static_cast<char>('A' + rand() % 26);
        A[i].inicjal_2 = static_cast<char>('A' + rand() % 26);
        A[i].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
    }
}

void drukowanie(Sstudent A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i].inicjal_1 << A[i].inicjal_2 << " " << fixed << setprecision(2) << A[i].ocena << " ";
    }
    cout << endl;
}

double ocena_max(Sstudent A[], int n) {
    double tmp_max = 0.0;

    for (int i = 0; i < n; i++) {
        if (tmp_max < A[i].ocena) {
            tmp_max = A[i].ocena;
        }
    }
    return tmp_max;
}

double srednia(Sstudent A[], int n) {
    double tmp_sum = 0;

    for (int i = 0; i < n; i++) {
        tmp_sum = tmp_sum + A[i].ocena;
    }

    return tmp_sum;
}



int main() {
    const int n = 4;
    Sstudent G1[n];
    Sstudent G2[n];

    srand(time(0));

    //losowanie
    losowanie(G1, n);
    losowanie(G2, n);

    //drukowanie
    cout << "G1" << endl;
    drukowanie(G1, n);
    cout << endl;
    cout << "G2" << endl;
    drukowanie(G2, n);

    // ró¿nica maxów
    cout << endl;
    cout << "roznica maxow wynosi: " << abs(ocena_max(G1, n) - ocena_max(G2, n)) << endl;
    double tmp1 = srednia(G1, n), tmp2 = srednia(G2, n);
    
    if (tmp1 > tmp2) {
        cout << "Wieksza jest srednia w G1 i wynosi: " << srednia(G1, n);
    }
    else if (tmp1 < tmp2) {
        cout << "Wieksza jest srednia w G2 i wynosi: " << srednia(G2, n);
    }
    else {
        cout << "Srednie sa rowne i  wynosza: " << srednia(G1, n);
    }

    return 0;
}
