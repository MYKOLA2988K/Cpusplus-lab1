#include <iostream>
#include <cmath>

int main() {
    double a, b, h, x, y;

    std::cout << "Enter the beginning of segment (a): ";
    std::cin >> a;
    std::cout << "Enter the end of segment (b): ";
    std::cin >> b;
    std::cout << "Enter step (h): ";
    std::cin >> h;

    std::cout << "-------------------\n";
    std::cout << ":  X  :  Y  :\n";
    std::cout << "-------------------\n";

    x = a; 
    while (x <= b) {
        if (x != 4) {
            y = 1 / pow(x - 4, 2) + 6;
            std::cout << ": " << x << " : " << y << " :\n";
        } else {
            std::cout << "The value x = 4 does not belong to the function domain.\n";
            break;
        }
        x += h; 
    }

    std::cout << "-------------------\n";

    return 0;
}
