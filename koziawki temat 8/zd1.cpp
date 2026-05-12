#include <iostream>

using namespace std;

bool CzyParzysta(int liczba)
{
    return liczba % 2 == 0;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (CzyParzysta(liczba))
    {
        cout << "Liczba " << liczba << " jest parzysta.";
    }
    else
    {
        cout << "Liczba " << liczba << " jest nieparzysta.";
    }

    return 0;
}