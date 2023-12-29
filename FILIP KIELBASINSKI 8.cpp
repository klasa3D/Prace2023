#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Samochod {
private:
	string nazwa;
	int pojemnosc;

public: Samochod(string nazwaSamochodu) {
	nazwa = nazwaSamochodu;
}
	  void addV(int poj) {
		  pojemnosc = poj;
	  }
	  void toShowAll() {
		  cout << "nazwa: " << nazwa << endl;
		  cout << "pojemnosc: " << pojemnosc << endl;
	  }
};
int main() {
	const int rozmiar = 100;
	int tablica[rozmiar];

	srand(time(0));

	for (int i = 0; i < rozmiar; ++i) {
		tablica[i] = rand() % 1000;
	}

	tablica[0] = 999;
	tablica[99] = 999;
	tablica[rozmiar - 1] = 999;

	for (int i = 0; i < rozmiar; ++i) {
		cout << tablica[i] << " ";
	}
	printf("\n");
	Samochod mojSamochod("nazwa");
	mojSamochod.addV(2400);
	mojSamochod.toShowAll();
	printf("\n end");
	return 0;
}