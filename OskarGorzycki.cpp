#include <iostream>
#include <time.h>
#include <string>

/* 1. Napisz tablice jednowymiarowa
a) Losowe liczby z zakresu 1 do 100
b) Pierwszy i ostatni element tablicy ma byc liczba 999

2. Napisz klase Samochod
a) Utworz konstruktor z nazwa parametru samochod
b) Dodaj pole pojemnosc samochodu -> ...addV()...
c) Wypisz pola tej klasy -> toShowAll()
*/

using namespace std;

class Samochod
{
public:
	string auta1;
	int poj1;
	string pokaz;

	Samochod(string auta) {
		auta1 = auta;
	}
	void addV(int poj) {
		poj1 = poj;
		addPoj();
	}

	void toShowAll() {
		cout << poj1 << " " << auta1 << " ";
	}

private:
	void addPoj() {
		poj1 += 1000;
	}

};

int main()
{
	int tab1d[100];

	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		tab1d[i];
		tab1d[i] = rand() % 100;

		if (tab1d[i] == tab1d[0]) {
			cout << "999 ";
		}

		cout << tab1d[i] << " ";

		if (tab1d[i] == tab1d[99]) {
			cout << "999 ";
		}
	}
	cout << endl << "========Auta========" << endl;
	Samochod fura("Bmw");
	fura.addV(100);
	fura.toShowAll();
}