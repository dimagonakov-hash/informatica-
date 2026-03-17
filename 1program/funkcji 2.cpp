#include <iostream>
using namespace std;

int suma(int a, int b) { return a + b; }
int roznica(int a, int b) { return a - b; }
int iloczyn(int a, int b) { return a * b; }
int iloraz(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a / b; 
}

int main() {
    int N;
    int a, b;

    while (true) {
        cout << "\n1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Koniec\n";
        cout << "Wybierz opcje: ";
        cin >> N;

        if (N == 0) break;

        cout << "Podaj dwie liczby: ";
        cin >> a >> b;

        switch (w) {
            case 1: cout << "Wynik: " << suma(a, b); break;
            case 2: cout << "Wynik: " << roznica(a, b); break;
            case 3: cout << "Wynik: " << iloczyn(a, b); break;
            case 4: cout << "Wynik: " << iloraz(a, b); break;
            default: cout << "Nieznana opcja!";
        }
    }

    return 0;
}