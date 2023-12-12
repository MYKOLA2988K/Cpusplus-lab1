#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

int main() {
    const int m = 5;
    const int n = 7; 
    srand(time(0));
    int numbers[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            numbers[i][j] = rand() % 10; 
        }
    }
    cout << "Initial array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of elements in each row:" << endl;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += numbers[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
    return 0;
}