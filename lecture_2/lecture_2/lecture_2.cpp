#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    // Bêdziemy potrzebowali dwu zmiennych: jednej typu ca³kowitego na liczbê
    // punktów 
    int lp;
    // i drugiej, zmiennoprzecinkowej w której umieœcimy obliczon¹ ocenê.
    double ocena;

    cout << "Program case_1 demonstrujacy instrukcje case\n\n";

    // Poprosimy u¿ytkownika o podanie liczby punktów i wczytamy jego odpowiedŸ
    cout << "Podaj liczbe punktow uzyskanych z testu: ";
    cin >> lp;

    // Nastêpnie ocenimy naszego studenta uczciwie. Zak³adaj¹c, ¿e maksymaln¹
    //  mo¿liw¹ do zdobycia liczb¹ punktów jest 10, ustalmy nastêpuj¹c¹ skalê
    // ocen :
    //  lp   ocena
    //  > 8   5.0
    //    8   4.5
    //    7   4.0
    //    6   3.5
    //    5   3.0
    //  < 5   2.0
    //  Oceny dokonamy oczywiœcie przy wykorzystaniu instrukcji switch
    switch (lp)
    {
    case 10: case 9: ocena = 5; break;
    case 8: ocena = 4.5; break;
    case 7: ocena = 4.0; break;
    case 6: ocena = 3.5; break;
    case 5: ocena = 3.0; break;
    case 0: case 1: case 2: case 3:case 4: ocena = 2.0; break;
        // dodamy jeszcze klauzulê default - aby zapewniæ obs³ugê w przypadku podania
        // nieprawid³owej liczby punktów. Wyœwietlimy wtedy stosowny komunikat i
        // ukarzemy studenta za próbê oszustwa ocen¹ niedostateczn¹.
    default:
        ocena = 2.0;
        cout << "Oj nieladnie, podales niemozliwa do uzyskania liczbe punktow\n";
    }

    // Na koniec wypiszemy ocenê 
    cout << "Twoja prace wypada ocenic na " << ocena << endl;

    return 0;
}