#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    const int m = 4; 
    const int n = 3; 
    srand(time(0));
    int numbers[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            numbers[i][j] = rand() % 10; 
        }
    }
    cout <<"Initial array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Number of even numbers in each row:" << endl;
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (numbers[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "The Row " << i + 1 << ": " << count << " even numbers." << endl;
    }
    return 0;
}
