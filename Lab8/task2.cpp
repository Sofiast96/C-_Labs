#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int n = 10;
    int arr[n] = { -5, 12, -3, -8, 25, -4, 25, -9, 15, -2 };

    std::cout << "Оригінальний масив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    std::cout << "Перший максимальний елемент: " << arr[maxIndex] 
              << " (індекс: " << maxIndex << ")\n\n";

    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    std::cout << "Результуючий масив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}