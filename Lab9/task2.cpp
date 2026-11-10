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

    cout << "Сгенерований масив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int A;
    cout << "Введіть число A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    cout << "Кількість елементів, більших за " << A << ": " << count << endl;

    return 0;
}