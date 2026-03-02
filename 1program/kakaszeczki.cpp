#include <iostream>
using namespace std;
int main(){
  int suma = 0;
  int N;
  cout << "podaj liczbe dodatnej N:";
    cin >> N;  
 
  for (int i = 1; i <= N; i++  ) {
  suma += i;
}
cout << "suma liczb od 1 do "  << N << "wynosi" << suma;


  cout << endl;
    return 0;
}