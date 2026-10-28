#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a, b, h;

    cout << "--- Завдання 3 (Варіант 6) ---" << endl;
    cout << "Введіть початок відрізку a: ";
    cin >> a;
    cout << "Введіть кінець відрізку b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;

    cout << "\n-------------------" << endl;
    cout << ":   X   :    Y    :" << endl;
    cout << "-------------------" << endl;

    double x = a;

    while (x <= b + 1e-9) {
        if (abs(x - 7.0) < 1e-7) {
            cout << ": " << setw(5) << x << " : " << "Поза ОДЗ! (x = 7)" << endl;
        } else {
            double y = (5 * x * x - 7 * x + 3) / (x - 7) - 13 * cos(x);
            cout << ": " << setw(5) << fixed << setprecision(2) << x 
                 << " : " << setw(7) << fixed << setprecision(4) << y << " :" << endl;
        }
        x += h;
    }

    cout << "-------------------" << endl;

    return 0;
}