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

const int n = 6;

double jenda_funkcja(Sstudent A[], int n, double &srednia_ocen) {
    const double G = 5.0;

    for (int i = 0; i < n; i++) {
        A[i].inicjal_1 = static_cast<char>('A' + rand() % 26);
        A[i].inicjal_2 = static_cast<char>('A' + rand() % 26);
        A[i].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
    }

    //drukowanie
    for (int i = 0; i < n; i++) {
        cout << A[i].inicjal_1 << A[i].inicjal_2 << " " << fixed << setprecision(2) << A[i].ocena << " ";
    }
    cout << endl;
    
    //srednia ocena
    double tmp_sum = 0;

    for (int i = 0; i < n; i++) {
        tmp_sum = tmp_sum + A[i].ocena;
    }
    
    srednia_ocen = tmp_sum / n;

    cout << "Srednia ocena wynosi: " << srednia_ocen << endl;

    //najwyzsza ocena 
    double tmp_max = 0.0;

    for (int i = 0; i < n; i++) {
        if (tmp_max < A[i].ocena) {
            tmp_max = A[i].ocena;
        }
    }

    return tmp_max;
}

int main() {
    srand(time(0));
    
    double srednia_ocena_G1 = 0.0;
    double srednia_ocena_G2 = 0.0;
    //const int n = 6;

    Sstudent G1[n];
    Sstudent G2[n];

    cout << "G1:" << endl;
    double max_ocena_G1 = jenda_funkcja(G1, n, srednia_ocena_G1);

    cout << "G2:" << endl;
    double max_ocena_G2 = jenda_funkcja(G2, n, srednia_ocena_G2);

    cout << "Roznica miedzy najwyzsza G1 i G2 wynosi: " << max_ocena_G1 - max_ocena_G2 << endl;

    return 0;
}