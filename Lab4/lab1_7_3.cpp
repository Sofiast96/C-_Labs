#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a >= 1 && a <= 255) && 
        (b >= 1 && b <= 255) && 
        (c >= 1 && c <= 255) && 
        (d >= 1 && d <= 255)) {
        
        cout << a << "." << b << "." << c << "." << d << endl;
    } else {
        cout << "Error: IP components must be between 1 and 255." << endl;
    }

    return 0;
}