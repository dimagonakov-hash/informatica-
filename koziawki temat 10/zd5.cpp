#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LosujTablice(int* array, int size, int start, int end)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = start + rand() % (end - start + 1);
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

    int size;
    int start;
    int end;

    cout << "Ile liczb wylosowac: ";
    cin >> size;

    cout << "Wartosc poczatkowa: ";
    cin >> start;

    cout << "Wartosc koncowa: ";
    cin >> end;

    int* numbers = new int[size];

    LosujTablice(numbers, size, start, end);

    cout << endl;

    cout << "Tablica: ";

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << ", ";
    }

    cout << endl << endl;

    int userNumber;
    int attempts = 0;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> userNumber;

        attempts++;

        if (SprawdzLiczbe(&userNumber, numbers, size))
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

    delete[] numbers;

    return 0;
}