#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // укр мова
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, y;

    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    bool in_top_left = (x >= -1.0 && x <= 0.0) && (y >= 0.0 && y <= 1.0);
    bool in_bottom_right = (x >= 0.0 && x <= 1.0) && (y >= -1.0 && y <= 0.0);

    if (in_top_left || in_bottom_right) {
        cout << "Точка (" << x << ", " << y << ") ПОПАДАЄ в заштриховану область." << endl;
    } else {
        cout << "Точка (" << x << ", " << y << ") НЕ попадає в заштриховану область." << endl;
    }

    return 0;
}