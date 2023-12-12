#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 10; 
    int numbers[size];
    srand(time(0));
    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 101 - 50; 
        cout << numbers[i] << " ";
    }
    cout << endl;
    int zero = -1;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == 0) {
            zero = i;
            break;
        }
    }
    if (zero != -1) {
        cout << "The number of the first zero element: " << zero + 1 << endl; 
    } else {
        cout << "The array doesn't contain null elements." << endl;
    }
    return 0;
}
