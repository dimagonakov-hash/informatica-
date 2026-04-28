#include <iostream>
using namespace std;

int main() {
    int godziny;
    char typ;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> typ;

    switch (typ) {
        case 'S':
        case 's':
            cout << "Oplata za parkowanie: " << godziny * 5 << " zl" << endl;
            break;

        case 'M':
        case 'm':
            cout << "Oplata za parkowanie: " << godziny * 3 << " zl" << endl;
            break;

        case 'A':
        case 'a':
            cout << "Oplata za parkowanie: " << godziny * 10 << " zl" << endl;
            break;

        default:
            cout << "Nieznany typ pojazdu!" << endl;
    }