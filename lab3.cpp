#include <string>
#include <iostream>
using namespace std;

int main() {
    int N;
    std::cout << "Enter a three-digit number: ";
    std::cin >> N;

    if (N >= 100 && N <= 999) {
        int a = N / 100;  
        int b = (N / 10) % 10;  
        int c = N % 10;  

        int num = 1;  

        if (a % 2 == 0) {
            num *= a;  
        }

        if (b % 2 == 0) {
            num *= b;  
        }

        if (c % 2 == 0) {
            num *= c; 
        }

        if (num == 1) {
            std::cout << "Your number is odd" << std::endl;
        } else {
            std::cout << "Product of even digits of your number: " << num << std::endl;
        }
    } else {
        std::cout << "The entered number is not a three-digit positive number." << std::endl;
    }

    return 0;
}
