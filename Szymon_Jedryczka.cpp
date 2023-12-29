
#include <iostream>

#include <Windows.h>

#include <time.h>

using namespace std;

class Samochod {
public:
    string nazwa;
    float poj;
    Samochod(string x) {
        nazwa = x;
    };

    void addV(float y) {
          poj = y;
          addpojemnosc();
    }

    void toShowAll() {
        cout << "Marka: " << nazwa << " Pojemnosc: " << poj;
    }
private:
    void addpojemnosc() {
        poj += 1000;
    }
};

int main()
{

    cout << "Zadanie 1" << endl;
    int tab[100];

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 98 + 1;
    }

    tab[0] = 999;
    tab[99] = 999;

    for (int j = 0; j < 100; j++) {
        cout << tab[j] << endl;
    }
    cout << "---------------------------------------------";
    cout << "Zadanie 2" << endl;
    cout << "Wpisz marke: ";
    string marek;
    cin >> marek;
    cout << "Wpisz pojemnosc samochodu: ";
    float pojemnosc;
    cin >> pojemnosc;
    Samochod auto1(marek);
    auto1.addV(pojemnosc);
    auto1.toShowAll();
    
}