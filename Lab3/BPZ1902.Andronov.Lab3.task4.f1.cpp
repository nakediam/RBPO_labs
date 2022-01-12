module BPZ1902.Andronov.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return 2 * pow(sin((3.0 * atan(1) * 4 - 2 * x)), 2) * pow(cos((5.0 * atan(1) * 4 + 2 * x)), 2);
			}
		}
	}
}