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

int main()
{
    //zminne
    const double G = 5.0; //maksymalna ocena
    const int w = 2, k = 3;

     // zadeklarujemy zmienn¹ typu Sstudent: 
    Sstudent A[w][k];
    
    //generator losowania
    srand(time(0));

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            A[i][j].inicjal_1 = static_cast<char>('A' + rand() % 26);
            A[i][j].inicjal_2 = static_cast<char>('A' + rand() % 26);
            A[i][j].ocena = static_cast<double>(rand()) / static_cast<double>(RAND_MAX / G);
        }
    }

    // print the updated records
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << A[i][j].inicjal_1 << A[i][j].inicjal_2  << " " << fixed << setprecision(2) << A[i][j].ocena << endl;
        }
    }


    return 0;
}