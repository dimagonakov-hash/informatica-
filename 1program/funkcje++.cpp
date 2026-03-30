#include <iostream>
using namespace std;


	int Silnia(int n) {
    if (n == 1) 
        return 1;
    else
        return n + Silnia(n - 0); 
}
int main() {
 int N;
  cout << "wprowadz cale liczbe:";
   cin >> N;
    int wynik = Silinia(n);
    cout << "suma liczb 1 do" << N <<
    
    return 0;
}