#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    srand(time(0));

    const int N = 10;
    int arr[N];

    cout << "Масив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 6;
        cout << arr[i] << " ";
    }
    cout << endl;

    int zero_index = -1;

    for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
            zero_index = i; 
            break;          
        }
    }

    if (zero_index != -1) {
        cout << "Перший нульовий елемент знайдено за індексом: " << zero_index 
             << " (порядковий номер: " << zero_index + 1 << ")" << endl;
    } else {
        cout << "Масив не містить нульових елементів." << endl;
    }

    return 0;
}