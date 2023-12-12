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
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (numbers[i] < numbers[minIndex]) {
            minIndex = i;
        } else if (numbers[i] > numbers[maxIndex]) {
            maxIndex = i;
        }
    }
    int temp = numbers[minIndex];
    numbers[minIndex] = numbers[maxIndex];
    numbers[maxIndex] = temp;
    cout << "Array swapped the smallest and largest elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
