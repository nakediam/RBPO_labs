#define _USE_MATH_DEFINES
#include "andronov.h"

using namespace std;

int main() {
    while (true) {
        cout << "Enter x: ";
        cin >> andronov::x;
        andronov::f();
        printf("f: %.4f\n", andronov::result);
    }
    return 0;
}