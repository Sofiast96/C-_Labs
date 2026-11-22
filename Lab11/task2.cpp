#include <iostream>

using namespace std;

struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date startTime, endTime;

    cin >> startTime.hours >> startTime.minutes;
    cin >> endTime.hours >> endTime.minutes;

    if (startTime.hours < 0 || startTime.hours >= 24 || 
        startTime.minutes < 0 || startTime.minutes >= 60 ||
        endTime.hours < 0 || endTime.hours >= 24 || 
        endTime.minutes < 0 || endTime.minutes >= 60) {
        cout << "Некоректні вхідні дані!" << endl;
        return 1;
    }

    int startTotal = startTime.hours * 60 + startTime.minutes;
    int endTotal = endTime.hours * 60 + endTime.minutes;

    if (endTotal < startTotal) {
        endTotal += 24 * 60;
    }

    int diffMinutes = endTotal - startTotal;

    Date duration;
    duration.hours = diffMinutes / 60;
    duration.minutes = diffMinutes % 60;

    cout << duration.hours << ":" << duration.minutes << endl;

    return 0;
}