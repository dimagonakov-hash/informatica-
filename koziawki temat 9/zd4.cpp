#include <iostream>

using namespace std;

const double PI = 3.1415;

// Szescian
double CalculateVolume(double a)
{
    return a * a * a;
}

// Walec
double CalculateVolume(double r, double h)
{
    return PI * r * r * h;
}

// Prostopadloscian
double CalculateVolume(double a, double b, double h)
{
    return a * b * h;
}

void DisplayResult(double result)
{
    cout << "Objetosc wynosi: " << result << endl;
}

int main()
{
    int choice;

    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;

    cout << "Wybierz numer bryly: ";
    cin >> choice;

    if (choice == 1)
    {
        double a;

        cout << "Podaj dlugosc boku: ";
        cin >> a;

        DisplayResult(CalculateVolume(a));
    }
    else if (choice == 2)
    {
        double a, b, h;

        cout << "Podaj dlugosc: ";
        cin >> a;

        cout << "Podaj szerokosc: ";
        cin >> b;

        cout << "Podaj wysokosc: ";
        cin >> h;

        DisplayResult(CalculateVolume(a, b, h));
    }
    else if (choice == 3)
    {
        double r, h;

        cout << "Podaj promien: ";
        cin >> r;

        cout << "Podaj wysokosc: ";
        cin >> h;

        DisplayResult(CalculateVolume(r, h));
    }
    else
    {
        cout << "Niepoprawny wybor!" << endl;
    }

    return 0;
}