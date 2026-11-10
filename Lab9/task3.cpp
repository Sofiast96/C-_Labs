#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
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
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int max1 = INT_MIN;
    int max2 = INT_MIN; 

    for (int i = 0; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        cout << "Другий по величині елемент відсутній (усі елементи однакові)." << endl;
    } else {
        cout << "Другий по величині елемент: " << max2 << endl;
    }

    return 0;
}