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
        numbers[i] = rand() % 100;
        cout << numbers[i] << " ";
    }
    cout << endl;
    int max = numbers[0];
    int max2 = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max2 = max;
            max = numbers[i];
        } else if (numbers[i] > max2 && numbers[i] < max) {
            max2 = numbers[i];
        }
    }
    cout <<"The second largest element: " << max2 << endl;
    return 0;
}
