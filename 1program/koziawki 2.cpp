#include <iostream>
using namespace std;
 int main(){
 
   int tablica[5];
   int suma=0;
   int max=5;
    cout <<"podaj liczby calkawite"<<endl;
	for (int i = 0; i < max; i++){
		
		
	cout << "Podaj liczbe nr " << i+1 << ": ";
	cin >> tablica[i];
	suma+= tablica[i];}	
	cout <<"srednia liczb "<<suma/max<<endl;
	

return 0;
}