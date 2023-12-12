#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
};

int main() {
    Time start_time, end_time;
    cout << "Enter start time (hours/minutes): ";
    cin >> start_time.hours >> start_time.minutes;
    while (start_time.hours >= 24 || start_time.hours < 0 || start_time.minutes >= 60 || start_time.minutes < 0) {
        cout << "Invalid input! Enter the start time again (hours/minutes): ";
        cin >> start_time.hours >> start_time.minutes;
    }
    cout << "Enter end time (hours/minutes): ";
    cin >> end_time.hours >> end_time.minutes;
    while (end_time.hours >= 24 || end_time.hours < 0 || end_time.minutes >= 60 || end_time.minutes < 0) {
        cout << "Invalid input! Enter the end time again (hours/minutes): ";
        cin >> end_time.hours >> end_time.minutes;
    }
    int duration_minutes = (end_time.hours - start_time.hours) * 60 + (end_time.minutes - start_time.minutes);
    if (duration_minutes < 0) {
        duration_minutes += 24 * 60;
    }
    int duration_hours = duration_minutes / 60;
    int remaining_minutes = duration_minutes % 60;
    cout << "Event duration: " << duration_hours << ":" << remaining_minutes << endl;
    return 0;
}