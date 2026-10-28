#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    long long product = 1;

    for (int i = 2; i <= 20; i += 2) {
        product *= i;
    }

    cout << "--- Завдання 2 (Варіант 6) ---" << endl;
    cout << "Добуток парних чисел від 1 до 20 дорівнює: " << product << endl;

    return 0;
}