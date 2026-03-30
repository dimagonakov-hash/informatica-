#include <iostream>
using namespace std;

int Silnia(int n) {
    if (n <= 2) return 1;
    return Silnia(n - 1) + Silnia(n - 2);
}

int main() {
    int n;
    cout << "podal liczbe elementuw";
    cin >> n;
	cout << "Ciag Fibonacciego: ";
    for (int i = 1; i <= n; i++) {
        cout << Silnia(i);
        if (i < n) cout;
    }
    return 0;
}