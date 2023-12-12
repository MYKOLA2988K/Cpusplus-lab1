#include <iostream>

using namespace std;

int main() {
    const int size = 12;
    int numbers[size] = {12, -7, -4, 15, 2, 7, -8, 15, -11, 1, -34, 44};
    int max = 0; 
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    int i = 0;
    while (numbers[i] != max) {
        if (numbers[i] < 0) {
            numbers[i] = 0;
        }
        i++;
    }
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
