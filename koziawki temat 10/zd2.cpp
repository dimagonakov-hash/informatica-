#include <iostream>

using namespace std;

void FindMinMax(float* array, int size, float* max, float* min)
{
    *max = array[0];
    *min = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }

        if (array[i] < *min)
        {
            *min = array[i];
        }
    }
}

int main()
{
    float numbers[10] =
    {
        1.5, -3.2, 4.8, 7.0, -1.1,
        0.0, 3.3, -6.6, 8.9, 2.2
    };

    float max;
    float min;

    FindMinMax(numbers, 10, &max, &min);

    cout << "Tablica: ";

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    cout << "Najwieksza liczba: " << max << endl;
    cout << "Najmniejsza liczba: " << min << endl;

    return 0;
}