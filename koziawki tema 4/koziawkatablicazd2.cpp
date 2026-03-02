#include <iostream>
using namespace std;

int main() {

    int tablica[5];
    int suma=0;
    cout << "Wprowadz 5 liczb calkowitych:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> tablica[i];

        if(tablica[i] < 0) {
            tablica[i] = 0;
        }
    }

    cout << "Liczby po zamianie na zero: ";
    for(int i = 0; i < 5; i++) {
        cout << tablica[i]<<",";
    }

    return 0;
}