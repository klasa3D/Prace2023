#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	srand((0));

	int tab[100];
	for (int i = 0; i < 100; i++) {
		int randomnumber = rand() % 99 + 1;
tab[i] = randomnumber;
tab[0] = 999;
tab[99] = 999;
		cout << tab[i] << endl;
		

	}
};

