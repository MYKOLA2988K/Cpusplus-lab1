#include <iostream>
using namespace std;

int main() {
    int dayOfWeek;

    cout << "Enter the day of the week number (1-7): ";
    cin >> dayOfWeek;

   
    switch (dayOfWeek) {
        case 1:
            cout << "Monday: Lesson 1 - C++, Lesson 3 - Advanced Mathematics, Lesson 5 - Converged Network Infrastructure" << endl;
            break;
        case 2:
            cout << "Tuesday: Lesson 3 - English, Lesson 4 - English" << endl;
            break;
        case 3:
            cout << "Wednesday: Lesson 2 - Higher Mathematics, Lesson 3 - English Language, Lesson 4 - Higher Mathematics, Lesson 5 - C++" << endl;
            break;
        case 4:
            cout << "Thursday: Lesson 3 - Philosophy, Lesson 4 - Advanced Mathematics, Lesson 5 - Converged Network Infrastructure" << endl;
            break;
        case 5:
            cout << "Friday: Lesson 3 - Applied algorithms and data structures, Lesson 4 - Applied algorithms and data structures" << endl;
            break;
        case 6:
            cout << "Saturday: Day off" << endl;
            break;
        case 7:
            cout << "Sunday: Day off" << endl;
            break;
        default:
            cout << "Incorrect day of the week number. Enter a number from 1 to 7." << endl;
    }

    return 0;
}