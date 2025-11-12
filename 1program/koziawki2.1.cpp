#include <iostream>
using namespace std;

int main() {
	int liczba1, liczba2;
    char dzialanie;

    cout << "Podaj pierwsza liczbe:";
    	cin >> liczba1;
    
    cout << "Podaj drugon liczbe:";
		cin >> liczba2; 
	
	cout << "Podaj znak dzialania (+, -, *, /, #): ";
    	cin >> dzialanie;
    	
switch (dzialanie) {
        case '+':
            cout << "Wynik: " << liczba1 + liczba2 << endl;
            break;
        case '-':
            cout << "Wynik: " << liczba1 - liczba2 << endl;
            break;
        case '*':
            cout << "Wynik: " << liczba1 * liczba2 << endl;
            break;
        case '/':
            if (liczba2 != 0)
                cout << "Wynik: " << static_cast<double>(liczba1) / liczba2 << endl;
            else
                cout << "Blad: nie mozna dzielic przez zero!" << endl;
            break;
        default:
            cout << "Blad: nieznany znak dzialania!" << endl;
            break;
        case '#':
                cout << "8===3" << liczba1 # liczba << endl;
            break;
    }
	
	return 0;
}