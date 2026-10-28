#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Вхідні дані для 18 варіанта
    double a = 1.0;
    double b = 0.001;

    // Математична константа Pi та e
    const double PI = 3.14159265358979323846;
    const double E = 2.71828182845904523536;

    // Обчислення першого кубічного кореня
    double arg_cos = (a - b) * (PI / 8.0);
    double part1 = cbrt(log(fabs(cos(arg_cos))) / 0.137);

    // Обчислення другого кубічного кореня
    double part2 = cbrt((a - b) / (b + a));

    // Підсумковий результат
    double y = part1 * part2 * E;

    // Вивід результату
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "Y = " << fixed << setprecision(6) << y << endl;

    return 0;
}