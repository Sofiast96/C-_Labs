#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int month;
    cout << "Введіть номер місяця (1-12): ";
    cin >> month;

    switch (month) {
        case 1:  cout << "Місяць: Січень | Квартал: 1" << endl; break;
        case 2:  cout << "Місяць: Лютий | Квартал: 1" << endl; break;
        case 3:  cout << "Місяць: Березень | Квартал: 1" << endl; break;
        case 4:  cout << "Місяць: Квітень | Квартал: 2" << endl; break;
        case 5:  cout << "Місяць: Травень | Квартал: 2" << endl; break;
        case 6:  cout << "Місяць: Червень | Квартал: 2" << endl; break;
        case 7:  cout << "Місяць: Липень | Квартал: 3" << endl; break;
        case 8:  cout << "Місяць: Серпень | Квартал: 3" << endl; break;
        case 9:  cout << "Місяць: Вересень | Квартал: 3" << endl; break;
        case 10: cout << "Місяць: Жовтень | Квартал: 4" << endl; break;
        case 11: cout << "Місяць: Листопад | Квартал: 4" << endl; break;
        case 12: cout << "Місяць: Грудень | Квартал: 4" << endl; break;
        default: cout << "Помилка: некоректний номер місяця!" << endl; break;
    }

    return 0;
}