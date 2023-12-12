#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    const int m = 4; 
    const int n = 7; 
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
    int min = numbers[0][0];
    int row = 0;
    int col = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (numbers[i][j] < min) {
                min = numbers[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << "Maximum element value: " << min << endl;
    cout << "Row: " << row + 1 << ", Column: " << col + 1 << endl;
    return 0;
}