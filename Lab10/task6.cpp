#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int m = 4, n = 7;
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

    int minVal = a[0][0];
    int minI = 0, minJ = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minI = i;
                minJ = j;
            }
        }
    }

    cout << "\nМінімальний елемент: " << minVal << endl;
    cout << "Номер (індекси): [" << minI << "][" << minJ << "]" << endl;

    return 0;
}