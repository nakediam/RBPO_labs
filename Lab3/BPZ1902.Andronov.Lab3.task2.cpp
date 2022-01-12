module BPZ1902.Andronov.Lab3.Task2;


namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
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
				int i = 0;
				while (i <=n){
					acc += a(i);
					i++;
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				int i = 2;
				while (abs(prev - curr) > eps) {
					prev = curr;
					curr = a(i);
					i++;
					acc += curr;
				}
				return acc;
			}
		}
	}

}