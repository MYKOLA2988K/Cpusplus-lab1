#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    const int m = 3; 
    const int n = 3; 
    srand(time(0));
    int numbers[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            numbers[i][j] = rand() % 100; 
        }
    }
    cout << "Initial array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    int rightSum = 0;
    int leftSum = 0;
    for (int i = 0; i < m; i++) {
        rightSum += numbers[i][i];
        leftSum += numbers[i][n - 1 - i];
    }
    cout << "Sum of the right diagonal: " << rightSum << endl;
    cout << "Sum of the left diagonal: " << leftSum << endl;

    return 0;
}