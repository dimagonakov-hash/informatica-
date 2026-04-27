#include <iostream>
using namespace std;

int main() {
    int liczba;
    cin >> liczba;
    cout << (liczba % 2 == 0) << endl;
if (liczba > 0)
    cout << 1;
else if (liczba < 0)
    cout << -1;
else
        cout << 0;

    return 0;
}