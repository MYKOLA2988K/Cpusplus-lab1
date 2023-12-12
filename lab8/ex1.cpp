#include <iostream>

using namespace std;

int main() {
    int m = 12;
    int numbers[m];
    int temp = 0;
    cout << "Enter " << m << " numbers: ";
    for (int i = 0; i < m; i++) {
        cin >> numbers[i];
    }
    int i = 0;
    while (i <= m - 1) {
        if (numbers[i] > numbers[i + 1]) {
            temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;
            i = 0;
        } else {
            i++;
        }
    }
    cout << "Array sorted by ascending: ";
    for (int i = 0; i < m; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout <<"Array sorted by descending: ";
    for (int i = m - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
