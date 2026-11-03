#include <iostream>
#include <algorithm>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);

    const int m = 12;
    int arr[m] = { 45, -12, 8, 0, 23, -5, 99, 14, -30, 3, 17, 88 };

    std::cout << "Оригінальний масив: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    std::sort(arr, arr + m);
    std::cout << "Масив за зростанням: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    std::sort(arr, arr + m, std::greater<int>());
    std::cout << "Масив за спаданням: ";
    for (int i = 0; i < m; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}