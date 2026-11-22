#include <iostream>

using namespace std;

struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date startTime;
    int addedMinutes;

    cin >> startTime.hours >> startTime.minutes >> addedMinutes;

    if (startTime.hours < 0 || startTime.hours >= 24 || 
        startTime.minutes < 0 || startTime.minutes >= 60 || 
        addedMinutes < 0) {
        cout << "Некоректні вхідні дані!" << endl;
        return 1;
    }

    int totalMinutes = startTime.hours * 60 + startTime.minutes + addedMinutes;

    Date resultTime;
    resultTime.hours = (totalMinutes / 60) % 24;
    resultTime.minutes = totalMinutes % 60;

    cout << resultTime.hours << ":" << resultTime.minutes << endl;

    return 0;
}