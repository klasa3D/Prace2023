#include <iostream>
using namespace std;
//#include <ctime>
/*class samochod {
    public;
};*/
int main()
{
    srand(time(NULL));
    int tab[100];
    for (int i = 0; i < 100; i++) {
      tab[i] = rand() % 99 + 1;
      tab[0] = 999;
      tab[99] = 999;
      cout << tab[i] << ",";
    }
    }

