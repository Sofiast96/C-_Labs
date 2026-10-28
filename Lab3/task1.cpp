#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int N;
    cout << "Введіть трьохзначне додатнє число N: ";
    cin >> N;

    if (N < 100 || N > 999) {
        cout << "Помилка: число має бути трьохзначним!" << endl;
        return 0;
    }

    int d1 = N / 100;        
    int d2 = (N / 10) % 10;  
    int d3 = N % 10;          

    int count = 0;
    if (d1 > 5) count++;
    if (d2 > 5) count++;
    if (d3 > 5) count++;

    cout << "Кількість цифр, більших за 5: " << count << endl;

    return 0;
}