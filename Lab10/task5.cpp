#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int m = 3, n = 4;
    int a[m][n];
    srand(time(NULL));

    cout << "Матриця:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 50;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int maxVal = a[0][0];
    int maxI = 0, maxJ = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "\nМаксимальний елемент: " << maxVal << endl;
    cout << "Номер (індекси): [" << maxI << "][" << maxJ << "]" << endl;

    return 0;
}