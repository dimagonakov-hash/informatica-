#include <iostream>
using namespace std;
   int main()
  int N;
  int suma;
  nt Silnia(int n) {
    if (n == 1)
        return 1;
    else
        return n * Silnia(n - 1);
}

int main() {
    int wynik = Silnia(5);
    cout << "5! = " << wynik << endl;
    return 0;
}

    return 0;
}