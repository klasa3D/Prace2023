#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ofstream MyFile("filecostam.txt");
	
	int x;
	cin >> x;

	if (x == 1) {
	 ifstream MyReadFile("filecostam.txt");
	 while (getline(MyReadFile, myText)) {
		 cout << myText;
	}
	else if (x == 2) {
		string y;
		cout << "Co chcesz wpisac do pliku?";
		cin >> y;
	
	    MyFile << y;
	}

	MyFile.close();
}