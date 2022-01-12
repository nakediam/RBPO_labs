#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double);

int main() {
    double x;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
    return 0;
}

double f(double x) {
    return 2 * pow(sin((3.0 * M_PI - 2 * x)), 2) * pow(cos((5.0 * M_PI + 2 * x)), 2); 
}