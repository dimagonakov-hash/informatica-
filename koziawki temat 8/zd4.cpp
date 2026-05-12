#include <iostream>

using namespace std;

void GetArrayFromUser(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }
}

int FindMaxValue(int tab[], int size)
{
    int max = tab[0];

    for (int i = 1; i < size; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }

    return max;
}

void DisplayResult(int max)
{
    cout << "Najwieksza liczba: " << max;
}

int main()
{
    const int SIZE = 5;
    int tab[SIZE];

    GetArrayFromUser(tab, SIZE);

    int max = FindMaxValue(tab, SIZE);

    DisplayResult(max);

    return 0;
}