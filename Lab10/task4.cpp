#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int m = 4, n = 6;
    int a[m][n];
    srand(time(NULL));

    cout << "Матриця:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    cout << "\nСума елементів кожного стовпчика:" << endl;
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += a[i][j];
        }
        cout << "Стовпчик " << j << ": " << sum << endl;
    }

    return 0;
}