#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        result = 2 * pow(sin((3.0 * M_PI - 2 * x)), 2) * pow(cos((5.0 * M_PI + 2 * x)), 2); 
        printf("result: %.4f\n", result);
    }
    return 0;
}