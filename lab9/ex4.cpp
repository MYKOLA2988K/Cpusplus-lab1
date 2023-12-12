#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout <<"Enter the number A: ";
    int A;
    cin >> A;
    const int size = 10; 
    int numbers[size];
    srand(time(0));
    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 100; 
        cout << numbers[i] << " ";
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > A) {
            count++;
        }
    }
    cout << "Number of elements greater than A: " << count << endl;
    return 0;
}
