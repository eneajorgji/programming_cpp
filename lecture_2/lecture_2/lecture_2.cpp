/*
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
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // zadeklarujemy dwie zmienne: w jednej bêdziemy pamiêtali nawiêkszy
    // dotychczas wczytany element, a w drugiej aktualnie wczytany
    double aktualna, najwieksza;

    // Na pocz¹tek powitanie:
    cout << "Wprowadzaj kolejne wyrazy ciagu, mog¹ byæ rzeczywiste.\n";
    cout << "Podanie liczby niedodatniej konczy wczytywanie\n";

    // Na pocz¹tek wczytamy pierwszy element
    cout << "Podaj element: ";
    cin >> aktualna;

    // Ju¿ mamy wczytany pierwszy element, na pewno jest on dotychczas
    // najwiêkszym wczytanym elementem.
    najwieksza = aktualna;

    // Pora zacz¹æ nasz¹ pêtlê. Proponujemy zastosowanie pêtli typu
    // while, lecz nic nie stoi na przeszkodzie, by wykorzystaæ
    // pêtlê typu do-while. Pêtla while wydaje siê byæ w
    // tym przypadku bardziej naturalna, poniewa¿ mamy ju¿ pierwszy
    // element i od razu na wstêpie mo¿emy sprawdziæ, czy nie jest on
    // koñcem naszego ci¹gu
    while (aktualna > 0)
    {
        // Wewn¹trz ka¿dego przebiegu pêtli wczytujemy kolejny element
        cout << "Podaj element: ";
        cin >> aktualna;

        // Porównujemy go z najwiêkszym
        if (aktualna > najwieksza)
            // Jeœli nowo wczytana liczba jest wiêksza od najwiêkszej wczytanej
            // do tej pory, to ta nowo wczytana stanie siê  najwiêksz¹ dotychczas
            // wczytan¹
            najwieksza = aktualna;

        // i to ju¿ koniec pêtli
    };

    // Po zakoñczeniu pêtli pozostaje nam jeszcze wyœwietliæ wyniki
    cout << "Najwieksza wprowadzona liczba to " << najwieksza << endl;

    return 0;
}