#include <iostream>
using namespace std;
 void ZwiekszElementy(float* tab, int rozmiar, float &min, float &max) {

	min = tab[0];
    max = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        	if (tab[i] < min){
		min = (tab[i]); 
        
    }
    if (tab[i] > max) {
            max = tab[i];
        }
    }
}
     int main () {
     	float tablica[10];
     	float min,max;	
     	
		 cout << "Tablica:1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2." << endl;
   
	return 0;
}
	 
    
    
    
    
    
    

