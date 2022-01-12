#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main() {
	while (true) {
		cout << "Enter x: ";
		cin >> x;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}

void f() {
	result = 2 * pow(sin((3.0 * M_PI - 2 * x)), 2) * pow(cos((5.0 * M_PI + 2 * x)), 2); 
}