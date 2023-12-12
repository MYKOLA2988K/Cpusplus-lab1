#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
    int end_time;
};

int main() {
    Date dates;
    enter_hours:
    cout << "Enter hours: ";
    cin >> dates.hours;
    if (dates.hours >= 24 || dates.hours < 0) {
        cout << "Invalid input! Enter the hours again (0-23): " << endl;
        goto enter_hours;
    }
    enter_minutes:
    cout << "Enter minutes: ";
    cin >> dates.minutes;
    if (dates.minutes >= 60 || dates.minutes < 0) {
        cout << "Invalid input! Enter the minutes again (0-59): " << endl;
        goto enter_minutes;
    }
    cout << "Enter the time (in minutes): ";
    cin >> dates.end_time;
    dates.minutes += dates.end_time % 60;
    dates.hours += dates.end_time / 60;
    if (dates.minutes >= 60) {
        dates.hours += dates.minutes / 60;
        dates.minutes %= 60;
    }
    if (dates.hours >= 24) {
        dates.hours %= 24;
    }
    cout << dates.hours << ":" << dates.minutes << endl;
    return 0;
}