#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    const int m = 4; 
    const int n = 6; 
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
    cout << "Sum of elements in each column:" << endl;
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += numbers[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
    return 0;
}