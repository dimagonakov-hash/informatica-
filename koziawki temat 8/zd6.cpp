#include <iostream>

using namespace std;

int GetNumberFromUser()
{
    int number;

    cout << "Podaj liczbe: ";
    cin >> number;

    return number;
}

unsigned long long CalculateFactorial(int number)
{
    unsigned long long factorial = 1;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    return factorial;
}

void DisplayResult(int number, unsigned long long factorial)
{
    cout << "Silnia liczby " << number << " wynosi: " << factorial;
}

int main()
{
    int number = GetNumberFromUser();

    unsigned long long factorial = CalculateFactorial(number);

    DisplayResult(number, factorial);

    return 0;
}