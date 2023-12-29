// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
string tab3d[2][3][6] =

	{
		{"1A", "1B", "1C", "1D", "1E", "1F"},
		{"2A", "2B", "2C", "2D", "2E", "2F"},
		{"3A", "3B", "3C", "3D", "3E", "3F"}
    },
	{
		{"1X", "2X", "3X", "4X", "5X", "6X"},
		{"1Y", "2Y", "3Y", "4Y", "5Y", "6Y"},
		{"1Z", "2Z", "3Z", "4Z", "5Z", "6Z"}
	}
};
for (int i = 0; i < 2; i++); {
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 4; k++) {
			cout << tab3d[k][j][i];
		}
	}
}

