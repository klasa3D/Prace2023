#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int tab[100];

    for (int i = 0; i < 100; i++)
    {
        tab[i] = (rand() % 100);
        
    }
    tab[0] = 999;
    tab[99] = 999;
    for (int i = 0; i < 100; i++)
    {
        cout << tab[i] << ",";
        
    }
    cout << endl;
}