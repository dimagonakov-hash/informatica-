#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



int main() {
	int sekret = (rand() % 10) + 1;
    int N;
    while (true){
        cout << "Odgadnij liczbe od 1 do 10:\n" << endl;
        cin >> N;
         if (N < sekret) {
             cout << "za malo!\n";
         }
        else if (N < sekret) {
            cout << "za duzo!\n";
        }
        else {
            cout << "Zgadles!!!\n";
            break;
        }
        
    }
    
    
    
    
    return 0;
    
}