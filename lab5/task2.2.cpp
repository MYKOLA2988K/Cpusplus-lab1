#include <iostream>

int main() {
    int number;
    int sum_of_squares = 0;

    std::cout << "Enter 10 integers:\n";

    
    for(int i = 0; i < 10; ++i) {
        std::cout << "Enter a number " << i + 1 << ": ";
        std::cin >> number;
        sum_of_squares += number * number;
    }

   
    std::cout << "The sum of the squares of the entered numbers: " << sum_of_squares << std::endl;

    return 0;
}