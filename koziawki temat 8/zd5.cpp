#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void DuzaMala(int liczba, int wylosowanaLiczba)
{
    if (liczba < wylosowanaLiczba)
    {
        cout << "Za malo\n";
    }
    else if (liczba > wylosowanaLiczba)
    {
        cout << "Za duzo\n";
    }
}

bool CheckLiczba(int liczba, int wylosowanaLiczba)
{
    return liczba == wylosowanaLiczba;
}

int main()
{
    srand(time(NULL));

    int wylosowanaLiczba = rand() % 100 + 1;

    int liczba;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if (CheckLiczba(liczba, wylosowanaLiczba))
        {
            cout << "Gratulacje! Odgadles liczbe.\n";
            break;
        }

        DuzaMala(liczba, wylosowanaLiczba);

    } while (true);

    return 0;
}