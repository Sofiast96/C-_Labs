#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    const int m = 3, n = 3;
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

    int mainDiagSum = 0;
    int sideDiagSum = 0;

    for (int i = 0; i < m; i++) {
        mainDiagSum += a[i][i];
        sideDiagSum += a[i][n - 1 - i];
    }

    cout << "\nСума головної діагоналі: " << mainDiagSum << endl;
    cout << "Сума побічної діагоналі: " << sideDiagSum << endl;

    return 0;
}