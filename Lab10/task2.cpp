#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int m = 6, n = 4;
    int a[m][n];
    srand(time(NULL));

    cout << "Матриця:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    cout << "\nКількість парних чисел у кожному стовпчику:" << endl;
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < m; i++) {
            if (a[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "Стовпчик " << j << ": " << count << endl;
    }

    return 0;
}