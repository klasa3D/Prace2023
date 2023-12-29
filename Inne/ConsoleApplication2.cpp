#include <iostream>
#include <string>

using namespace std;

class naszaKlasa
{
public:
    int liczba;
    naszaKlasa() {
        cout << "Konstruktor \n";
    }

    void add(int x) {
        liczba = x;
    }

    void toString() {
        cout << "Liczba: " << liczba << endl;
    }

    void addString(string txt) {
        cout << txt;
    }




};

int main()
{
    naszaKlasa aaa;
    aaa.add(100);
    aaa.toString();
    aaa.addString("Jajo");




    return 0;
}
