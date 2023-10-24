#include <iostream> 
 
int main() { 
    double pi4 = 0.0; 
    long n; 
 
    std::cout << "Number of iterations? "; 
    std::cin >> n; 
 
    for (long i = 0; i < n; ++i) { 
        pi4 += (i % 2 == 0) ? 1.0 / (2 * i + 1) : -1.0 / (2 * i + 1); 
    } 
 
    std::cout.precision(20); 
    std::cout << "Pi = " << (pi4 * 4.0) << std::endl; 
 
    return 0; 
}
