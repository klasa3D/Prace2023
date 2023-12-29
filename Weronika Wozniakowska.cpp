#include <iostream>
#include <time.h>
#include <string>

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
		
	}

	void toShowAll() {
		cout << poj1 << " " << auta1 << " ";
	}

};
int main()
{
	cout << endl << "========Auta========" << endl;
	Samochod fura("Bmw");
	fura.addV(100);
	fura.toShowAll();
}
