#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int N;
    cout << "Введіть натуральне число N: ";
    cin >> N;

    int count = 0;
    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 1 && digit != 9) {
            count++;
        }

        temp /= 10;
    }

    cout << "Кількість цифр числа " << N << ", які не дорівнюють 1 і 9: " << count << endl;

    return 0;
}