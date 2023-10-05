#include <iostream>
#include <cmath> 
int main() {
    double x, y;
    
  
    double values_of_y[5];

    
    for(int i = 0; i < 5; ++i) {
        std::cout << "Enter the value x: ";
        std::cin >> x;
        y = sin(x) + pow(x, 2);
        values_of_y[i] = y;
    }

    
    std::cout << "\nFunction value y = sin(x) + x^2:\n";
    for(int i = 0; i < 5; ++i) {
        std::cout << "x = " << values_of_y[i] << std::endl;
    }

    return 0;
}