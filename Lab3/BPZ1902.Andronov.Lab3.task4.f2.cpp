module BPZ1902.Andronov.Lab3.Task4:f2;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				return (x > 3) ? (1 / (x*x*x + 6)) : (pow(x, 2) - 3*x + 9);
			}
		}
	}
}