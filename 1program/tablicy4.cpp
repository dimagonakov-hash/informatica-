#include <iostream>
using namespace std;

int main() {

    int tablica[10];
    cout << "Podaj 10 liczb calkowitych:" << endl;

    for(int i = 0; i < 10; i++) {
    	cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }
    
		int suma = 0;
		
	for(int i = 1; i < 10; i++) {	
        if (tablica[i]  % 2 == 0) {
         suma += tablica[i];
    }
}
    cout << "Liczby parzyste:" << suma <<endl;
    


    return 0;
}