/*
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    const int a = -5;
    int l1;
    cout << "wpisz liczbe: ";
    cin >> l1;
    cout << "liczba l1 jest: " << endl;

    if (a > 0) 
        cout << a << endl; 
    else 
        cout << "zmieniamy znak: ";
        cout << -a;

    return 0;
} */


/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
    // Deklarujemy jedn� zmienn� zawieraj�c� obrabian� liczb� 
    int l1;
    cout << "Program jesli_2 obliczajacy wartosc bezwzgledna liczby\n\n";

    // Poprosimy u�ytkownika o wprowadzenie liczby 
    cout << "Wpisz jakas liczbe calkowita : ";
    cin >> l1;
    // sprawdzimy, czy jest ona ujemna 
    if (l1 < 0)
    {
        // otwieraj�c ten nawias klamrowy informujemy, �e je�li warunek jest prawdziwy, 
        // to b�dzie wykonywana wi�cej ni� jedna instrukcja. Dzi�ki temu mo�emy 
        // najpierw wypisa� informacj� o zmianie znaku
        cout << "Wprowadziles liczbe ujemna. Nastapi zmiana jej znaku\n";
        // nast�pnie podstawienie warto�ci ze zmienionym znakiem. 
        l1 = -l1;
    }
    // No i wy�wietlenie wyniku 
    cout << "Wartosc bezwzgledna: " << l1 << endl;
    return 0;
}
*/

/*
// zadanie 1
#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Podaj dwie liczby calkowite: \n";
    cin >> x >> y;

    if (x > y)
    {
        cout << "Wieksza liczba to " << x << endl;
    }
    else if (y > x)
    {
        cout << "Wieksza liczba to " << y << endl;
    }
    else
        // nie trzeba sprawdza� warunku x==y, bo innej mo�liwo�ci nie ma
    {
        cout << "Liczby sa sobie rowne, nie moge wydrukowac wiekszej \n";
    }

    return 0;
}
*/

//zadanie 2
#include <iostream>

using namespace std;
int main()
{
    int a, b, mniejsza;
    cout << "wpisz dwie liczby calkowite\n";
    cin >> a >> b;

    // tutaj klamr� otwieramy zaraz za warunkiem w if-ie
    // to te� cz�sty spos�b zapisu
    if (a == b) {
        cout << "obie liczby sa sobie rowne\n";
        return 0; // program ko�czy dzia�anie
    }
    // teraz na pewno obie liczby nie s� sobie r�wne,
    // dlatego nie by� potrzebny else do powy�szego if-a

    // pojedynczych instrukcji nie umieszczamy poni�ej w klamrach,
    // aby pokaza� kr�tsz� form� zapisu
    if (a < b)
        mniejsza = a;
    else
        mniejsza = b;

    cout << "mniejsza liczba jest: ";
    if (mniejsza > 0)
        cout << "dodatnia\n";
    else if (mniejsza < 0)
        cout << "ujemna\n";
    else // nie trzeba sprawdza�, czy jest r�wna zeru, bo innej mo�liwo�ci nie ma
        cout << "rowna zeru\n";

    return 0;
}