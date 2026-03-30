#include <iostream>
using namespace std;

int Silnia(int n) {
    if (n == 1)
        return 1;
    else
        return n + Silnia(n - 1);
}

int main() {
	int N;
	cout << "wpicz liczbe";
	cin >> N;
    int wynik = Silnia(5);
    cout << "suma liczb wynosi " << wynik << endl; 
    return 0;
}