#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <iomanip>

using namespace std;

struct Sstudent {
    char inicjal_1, inicjal_2;
    double ocena;
};

double jenda_funkcja(Sstudent A[], Sstudent B[], int n, double &srednia_ocen) {
    const double G = 5.0;

    for (int i = 0; i < n; i++) {
        A[i].inicjal_1 = static_cast<char>('A' + rand() % 26);
        A[i].inicjal_2 = static_cast<char>('A' + rand() % 26);
        A[i].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
    }

    for (int i = 0; i < n; i++) {
        B[i].inicjal_1 = static_cast<char>('A' + rand() % 26);
        B[i].inicjal_2 = static_cast<char>('A' + rand() % 26);
        B[i].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
    }

    //drukowanie
    cout << "G1" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i].inicjal_1 << A[i].inicjal_2 << " " << fixed << setprecision(2) << A[i].ocena << " ";
    }
    cout << endl;
    
    cout << "G2" << endl;
    for (int i = 0; i < n; i++) {
        cout << B[i].inicjal_1 << B[i].inicjal_2 << " " << fixed << setprecision(2) << B[i].ocena << " ";
    }
    cout << endl;

    //srednia ocena
    double tmp_sum1 = 0, tmp_sum2 = 0;

    for (int i = 0; i < n; i++) {
        tmp_sum1 = tmp_sum1 + A[i].ocena;
    }
    double srednia_ocen1 = tmp_sum1 / n;

    for (int i = 0; i < n; i++) {
        tmp_sum2 = tmp_sum2 + B[i].ocena;
    }
    double srednia_ocen2 = tmp_sum2 / n;

    cout << "Srednia ocena wynosi: " << srednia_ocen1 << ", w tablicy G1." << endl;
    cout << "Srednia ocena wynosi: " << srednia_ocen2 << ", w tablicy G2." << endl;

    /*
    if (srednia_ocen1 >= srednia_ocen2) {
        cout << "Srednia ocena wynosi: " << srednia_ocen1 << ", w tablicy G1." << endl;
        srednia_ocen = srednia_ocen1;
    }
    if (srednia_ocen1 < srednia_ocen2) {
        cout << "Srednia ocena wynosi: " << srednia_ocen2 << ", w tablicy G2." << endl;
        srednia_ocen = srednia_ocen2;
    }
    */

    //najwyzsza ocena 
    double tmp_max1 = 0.0;
    double tmp_max2 = 0.0;

    for (int i = 0; i < n; i++) {
        if (tmp_max1 < A[i].ocena) {
            tmp_max1 = A[i].ocena;
        }
    }

    for (int i = 0; i < n; i++) {
        if (tmp_max2 < B[i].ocena) {
            tmp_max2 = B[i].ocena;
        }
    }

    double roznica_max = tmp_max1 - tmp_max2;
    cout << "Roznica miedzy najwyzsza G1 i G2 wynosi: " << roznica_max << endl;

    if (tmp_max1 >= tmp_max2) {
        cout << "Najwyzsza ocena wynosi: " << tmp_max1 << ", w tablicy G1." << endl;
        return tmp_max1;
    }
    else {
        cout << "Najwyzsza ocena wynosi: " << tmp_max2 << ", w tablicy G2." << endl;
        return tmp_max2;
    }
}

int main() {
    srand(time(0));
    const int n = 4;
    double a = 0;

    Sstudent G1[n];
    Sstudent G2[n];

    jenda_funkcja(G1, G2, n, a);

    return 0;
}