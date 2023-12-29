// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <ctime>
#include <iostream>
using namespace std;

class samochod
{
public:
    void addv(int poj){ 
        cout << "elo";
    }
   



};






int main()
{
    srand(time(NULL));
    int tab[100];

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 98 + 1;
        
        cout << tab[i] << ",";
    }
    cout << endl;
    cout << "----------------" << endl;
    tab[100];
    tab[0] = 999;
    tab[99] = 999;
    for (int i = 0; i < 100; i++) {
        

        cout << tab[i]<<",";
    }
    cout << endl;

    
    
  


    

        
       
    

    

    
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
