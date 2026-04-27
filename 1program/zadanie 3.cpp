#include <iostream>
using namespace std;
int ObliczSume(int *tablica, int rozmiar) {
	int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
    suma += tablica[i];
}
    	return suma;
	}
	 
int main() {
    int tablica[4] = {5, 10 ,15, 20};
    cout << ObliczSume(tablica, 4) << endl;
    for (int i = 0; i < 4; i++){
    	cin >> tablica[i];
	}
for (int i = 0; i < 4; i++) {
        cout << tablica[i] << " ,";
    }

    cout << endl;
    cout << ObliczSume(tablica, 4) << endl;

    return 0;
}