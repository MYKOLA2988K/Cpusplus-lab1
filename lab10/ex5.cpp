#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    const int m = 3; 
    const int n = 4;
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
    int max = numbers[0][0];
    int row = 0;
    int col = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (numbers[i][j] > max) {
                max = numbers[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << "Maximum element value: " << max << endl;
    cout << "Row: " << row + 1 << ", Column: " << col + 1 << endl;
    return 0;
}