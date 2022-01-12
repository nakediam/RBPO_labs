#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void f(const double&, double&);

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        f(x, result);
        printf("f: %.4f\n", result);
    }
    return 0;
}


void f(const double& x, double& result) {
    result = 2 * pow(sin((3.0 * M_PI - 2 * x)), 2) * pow(cos((5.0 * M_PI + 2 * x)), 2); 
}