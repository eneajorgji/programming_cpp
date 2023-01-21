#include <iostream>
#include <cstdlib>

using namespace std;

// Definicja struktury danych
struct LiczbaZespolona
{
	double re, im;
};

// Funkcja sumuj¹ca - parametry przekazywane przez wartoœæ
LiczbaZespolona dodaj_wartosc(LiczbaZespolona x, LiczbaZespolona y)
{
	x.re += y.re;
	x.im += y.im;

	return x;
}

// Taka sama funkcja - lecz tym razem parametry przeka¿emy przez referencjê 
LiczbaZespolona dodaj_zmienna(LiczbaZespolona& x, LiczbaZespolona& y)
{
	x.re += y.re;
	x.im += y.im;

	return x;
}



int main(int argc, char* argv[])
{
	cout << "Roznica w sposobie przekazywania parametrow\n\n";

	// liczby bêd¹ce naszymi argumentami: 
	LiczbaZespolona a, b, c;
	// wynik dodawania: 
	LiczbaZespolona d;

	a.re = 1;
	a.im = 2;
	b.re = 3;
	b.im = 4;
	c.re = 5;
	c.im = 6;

	cout << "Parametry przekazywane przez wartosc\n\n";
	cout << "Liczby przed wywolaniem funkcji dodaj_wartosc:\n";
	cout << "  a = " << a.re << "+" << a.im << "*i\n";
	cout << "  b = " << b.re << "+" << b.im << "*i\n";
	cout << "  c = " << c.re << "+" << c.im << "*i\n";

	// dodanie a + b i a + c przy pomocy pierwszej wersji funkcji: 
	cout << "Wynik dodawania:\n";
	d = dodaj_wartosc(a, b);
	cout << "  a + b = " << d.re << "+" << d.im << "*i\n";
	d = dodaj_wartosc(a, c);
	cout << "  a + c = " << d.re << "+" << d.im << "*i\n";

	cout << "Liczby po wywolaniu funkcji dodaj_wartosc:\n";
	cout << "  a = " << a.re << "+" << a.im << "*i\n";
	cout << "  b = " << b.re << "+" << b.im << "*i\n";
	cout << "  c = " << c.re << "+" << c.im << "*i\n";

	cout << "Parametry przekazywane przez zmienna\n\n";
	cout << "Liczby przed wywolaniem funkcji dodaj_zmienna:\n";
	cout << "  a = " << a.re << "+" << a.im << "*i\n";
	cout << "  b = " << b.re << "+" << b.im << "*i\n";
	cout << "  c = " << c.re << "+" << c.im << "*i\n";

	// dodanie a + b i a + c przy pomocy pierwszej wersji funkcji: 
	cout << "Wynik dodawania:\n";
	d = dodaj_zmienna(a, b);
	cout << "  a + b = " << d.re << "+" << d.im << "*i\n";
	d = dodaj_zmienna(a, c);
	cout << "  a + c = " << d.re << "+" << d.im << "*i\n";

	cout << "Liczby po wywolaniu funkcji dodaj_zmienna:\n";
	cout << "  a = " << a.re << "+" << a.im << "*i\n";
	cout << "  b = " << b.re << "+" << b.im << "*i\n";
	cout << "  c = " << c.re << "+" << c.im << "*i\n";

	return 0;
}