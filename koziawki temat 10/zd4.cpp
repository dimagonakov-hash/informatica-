#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LosujTablice(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 51;
    }
}

bool SprawdzLiczbe(int* number, int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*number == array[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    srand(time(0));

    const int SIZE = 10;

    int numbers[SIZE];

    LosujTablice(numbers, SIZE);

    cout << "Tablica: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << ", ";
    }

    cout << endl;

    int userNumber;
    int attempts = 0;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> userNumber;

        attempts++;

        if (SprawdzLiczbe(&userNumber, numbers, SIZE))
        {
            cout << "Zgadles!" << endl;
            break;
        }
        else
        {
            cout << "Nie zgadles" << endl;
        }

    } while (true);

    cout << "Zgadles za "
         << attempts
         << " razem." << endl;

    return 0;
}