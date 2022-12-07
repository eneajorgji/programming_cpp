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
    // Deklarujemy jedn¹ zmienn¹ zawieraj¹c¹ obrabian¹ liczbê 
    int l1;
    cout << "Program jesli_2 obliczajacy wartosc bezwzgledna liczby\n\n";

    // Poprosimy u¿ytkownika o wprowadzenie liczby 
    cout << "Wpisz jakas liczbe calkowita : ";
    cin >> l1;
    // sprawdzimy, czy jest ona ujemna 
    if (l1 < 0)
    {
        // otwieraj¹c ten nawias klamrowy informujemy, ¿e jeœli warunek jest prawdziwy, 
        // to bêdzie wykonywana wiêcej ni¿ jedna instrukcja. Dziêki temu mo¿emy 
        // najpierw wypisaæ informacjê o zmianie znaku
        cout << "Wprowadziles liczbe ujemna. Nastapi zmiana jej znaku\n";
        // nastêpnie podstawienie wartoœci ze zmienionym znakiem. 
        l1 = -l1;
    }
    // No i wyœwietlenie wyniku 
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
        // nie trzeba sprawdzaæ warunku x==y, bo innej mo¿liwoœci nie ma
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

    // tutaj klamrê otwieramy zaraz za warunkiem w if-ie
    // to te¿ czêsty sposób zapisu
    if (a == b) {
        cout << "obie liczby sa sobie rowne\n";
        return 0; // program koñczy dzia³anie
    }
    // teraz na pewno obie liczby nie s¹ sobie równe,
    // dlatego nie by³ potrzebny else do powy¿szego if-a

    // pojedynczych instrukcji nie umieszczamy poni¿ej w klamrach,
    // aby pokazaæ krótsz¹ formê zapisu
    if (a < b)
        mniejsza = a;
    else
        mniejsza = b;

    cout << "mniejsza liczba jest: ";
    if (mniejsza > 0)
        cout << "dodatnia\n";
    else if (mniejsza < 0)
        cout << "ujemna\n";
    else // nie trzeba sprawdzaæ, czy jest równa zeru, bo innej mo¿liwoœci nie ma
        cout << "rowna zeru\n";

    return 0;
}