#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    // укр мова
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, b, c, Y;

    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;

    if (x < 2) {
        double denom = x - 2 * b * pow(x, 2);
        if (denom == 0) {
            cout << "Помилка: ділення на нуль!" << endl;
            return 0;
        }
        Y = (x - 9 * b * x) / denom;
    } else { // для x >= 2
        double denom = x - 5 * c * pow(x, 3);
        if (denom == 0) {
            cout << "Помилка: ділення на нуль!" << endl;
            return 0;
        }
        Y = (x - 2 * c * x) / denom;
    }

    cout << "Результат Y = " << fixed << setprecision(4) << Y << endl;

    return 0;
}