module BPZ1902.Andronov.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				return (x > 3) ? (1 / (x*x*x + 6)) : (pow(x, 2) - 3*x + 9);
			}
		}
	}
}