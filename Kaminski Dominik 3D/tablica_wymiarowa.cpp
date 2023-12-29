int main() 
{
    const int size = 100;
    int tablica[size];

    liczba pseudolosowych std::srand(std::time(0));

    tablica[0] = std::srand() % 100;

    tablica[0] = 999;
    tablica[size] = 999;
}