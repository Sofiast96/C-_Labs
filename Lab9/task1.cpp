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

    cout << "Початковий масив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100; 
        cout << arr[i] << " ";
    }
    cout << endl;

    int min_idx = 0;
    int max_idx = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }

    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    cout << "Масив після обміну: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}