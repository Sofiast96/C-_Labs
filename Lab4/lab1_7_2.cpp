#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    double res1 = 1.0 / num1;
    double res2 = 1.0 / num2;

    double epsilon = 0.000001;

    if (fabs(res1 - res2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}