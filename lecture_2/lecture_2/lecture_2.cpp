#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    // B�dziemy potrzebowali dwu zmiennych: jednej typu ca�kowitego na liczb�
    // punkt�w 
    int lp;
    // i drugiej, zmiennoprzecinkowej w kt�rej umie�cimy obliczon� ocen�.
    double ocena;

    cout << "Program case_1 demonstrujacy instrukcje case\n\n";

    // Poprosimy u�ytkownika o podanie liczby punkt�w i wczytamy jego odpowied�
    cout << "Podaj liczbe punktow uzyskanych z testu: ";
    cin >> lp;

    // Nast�pnie ocenimy naszego studenta uczciwie. Zak�adaj�c, �e maksymaln�
    //  mo�liw� do zdobycia liczb� punkt�w jest 10, ustalmy nast�puj�c� skal�
    // ocen :
    //  lp   ocena
    //  > 8   5.0
    //    8   4.5
    //    7   4.0
    //    6   3.5
    //    5   3.0
    //  < 5   2.0
    //  Oceny dokonamy oczywi�cie przy wykorzystaniu instrukcji switch
    switch (lp)
    {
    case 10: case 9: ocena = 5; break;
    case 8: ocena = 4.5; break;
    case 7: ocena = 4.0; break;
    case 6: ocena = 3.5; break;
    case 5: ocena = 3.0; break;
    case 0: case 1: case 2: case 3:case 4: ocena = 2.0; break;
        // dodamy jeszcze klauzul� default - aby zapewni� obs�ug� w przypadku podania
        // nieprawid�owej liczby punkt�w. Wy�wietlimy wtedy stosowny komunikat i
        // ukarzemy studenta za pr�b� oszustwa ocen� niedostateczn�.
    default:
        ocena = 2.0;
        cout << "Oj nieladnie, podales niemozliwa do uzyskania liczbe punktow\n";
    }

    // Na koniec wypiszemy ocen� 
    cout << "Twoja prace wypada ocenic na " << ocena << endl;

    return 0;
}