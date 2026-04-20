#include <iostream>
using namespace std;
void 

int main(){
int a = 5;
int b = 10;
 int* wsk = &a;
 int* wsk = &b;
 cout << "po modyfikacji" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
   *wsk = 15;
   *wsk = 20;
    cout << "po modyfikacji" << endl;
     
    
    return 0;
}