#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x, y;
    
    cout << "--- Завдання 1 ---" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Введіть значення x (" << i + 1 << " з 5): ";
        cin >> x;
        
        y = pow(sin(x), 5) + abs(5 * x - 1.5);
        
        cout << "Для x = " << x << ", результат y = " << y << "\n" << endl;
    }
    
    return 0;
}