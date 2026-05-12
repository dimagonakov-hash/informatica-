#include <iostream>

using namespace std;

int ObliczSume(int* array, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }

    return sum;
}

int main()
{
    const int SIZE = 4;

    int numbers[SIZE] = {5, 10, 15, 20};

    int sum = ObliczSume(numbers, SIZE);

    cout << "Suma elementow tablicy: " << sum << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Podaj nowa wartosc dla elementu "
             << i << ": ";

        cin >> *(numbers + i);
    }

    cout << endl;

    cout << "Nowa tablica:" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    sum = ObliczSume(numbers, SIZE);

    cout << "Nowa suma elementow tablicy: "
         << sum << endl;

    return 0;
