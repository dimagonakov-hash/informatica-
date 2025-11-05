#include <iostream>
using namespace std;

int main() {
    int punkty;
    

    cout << "Podaj liczbe punktow (0-100): ";
    cin >> punkty;

    if (cin.fail()) {
        cout << "Blad: wprowadzono niepoprawne dane (nie liczba)." << endl;
        return 1;
    }

    if (punkty < 0 || punkty > 100) {
        cout << "Blad: liczba punktow musi byc w zakresie 0-100." << endl;
    } 
    else if ((punkty >= 0) && (punkty <= 49)) {
        cout << "Ocena niedostateczna." << endl;
    } 
    else if ((punkty >= 50) && (punkty <= 69)) {
        cout << "Ocena dostateczna." << endl;
    } 
    else if ((punkty >= 70) && (punkty <= 84 )) {
        cout << "Ocena dobra." << endl;
    } 
    else if ((punkty >= 85) && (punkty <= 99 )) {
        cout << "Ocena bardzo dobra." << endl;
    } 
    else { // punkty == 100
        cout << "Ocena celujaca." << endl;
    }

    return 0;
}