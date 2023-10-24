#include <iostream>

int main() {
   
    int N;
    int digit;
    int sum = 0;

    std::cout << "Enter a natural number N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "The entered number is not a natural number." << std::endl;
        return 1;
    }
    
    while (N > 0) {
        digit = N % 10;  
        if (digit < 7) {
            sum += digit;
        }
        N /= 10;  
    }

    std::cout << "The sum of digits less than 7, including: " << sum << std::endl;

    return 0;
}
