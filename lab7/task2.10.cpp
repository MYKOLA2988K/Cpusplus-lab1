#include <iostream> 
 
int main() { 
    std::cout << "Enter a natural number greater than 1 (square size): "; 
     
    int n; 
    std::cin >> n; 
 
    while (n <= 1) { 
        std::cout << "Entered number is not valid. Enter a natural number greater than 1." << std::endl; 
        return 1; 
    } 
 
    const int MAX_N = 20; 
 
    while (n > MAX_N) { 
        std::cout << "Entered number is too large for display. The maximum allowed value will be used: " << MAX_N << std::endl; 
        n = MAX_N; 
    } 
 
    std::cout << '+'; 
    for (int i = 0; i < n; i++) 
        std::cout << '-'; 
    std::cout << '+' << std::endl; 
 
    for (int i = 0; i < n; i++) { 
        std::cout << '|'; 
        for (int j = 0; j < n; j++) 
            std::cout << ' '; 
        std::cout << '|' << std::endl; 
    } 
 
    std::cout << '+'; 
    for (int i = 0; i < n; i++) 
        std::cout << '-'; 
    std::cout << '+' << std::endl; 
 
    return 0; 
}
