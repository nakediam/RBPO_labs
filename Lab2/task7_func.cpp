#define _USE_MATH_DEFINES
#include <cmath>
double x;
double result;

void f() {
	
	result = 2 * pow(sin((3.0 * M_PI - 2 * x)), 2) * pow(cos((5.0 * M_PI + 2 * x)), 2);
}