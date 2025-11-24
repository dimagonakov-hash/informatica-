#include <iostream>
#include <string>

int main() {
    int n; 
    std::string equals = "=="; 

    std::cout << "status: 8" << equals << "3\n";
    std::cout << "liczba 'cm': ";
    std::cin >> n;

    
    equals.append(n, '=');

    std::cout << "teraz: 8" << equals << "3\n";

    return 0;
}
