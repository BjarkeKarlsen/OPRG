#include <math.h>

#include <array>
using namespace std;
namespace mynamespace {
	double discriminant(double _a, double _b, double _c) {
		return sqrt(pow(_b, 2) - (4 * _a * _c));
	}

	array<double, 2> solve(double _a, double _b, double _c) {
		double d = discriminant(_a, _b, _c);
		double x1 = ((-_b + d) / (2 * _a));
		double x2 = ((-_b - d) / (2 * _a));

		array<double, 2> arr;
		arr[0] = x1;
		arr[1] = x2;
		return arr;
	}
}
