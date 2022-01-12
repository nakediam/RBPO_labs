module BPZ1902.Andronov.Lab3.Task1;


namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return 2 * pow(sin((3.0 * atan(1) * 4 - 2 * x)), 2) * pow(cos((5.0 * atan(1) * 4 + 2 * x)), 2);
			}

			double f2(double x) {
				return (x > 3) ? (1 / (x*x*x + 6)) : (pow(x, 2) - 3*x + 9);
			}

			double a(int i) {
				return pow(-1.0, i) * (1.0 / ((i+1.0) * (i+2.0) * (i+3.0)));
			}

			double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				for (int i = 2; abs(prev - curr) > eps; i++) {
					prev = curr;
					curr = a(i);
					acc += curr;
				}
				return acc;
			}
		}
	}
}