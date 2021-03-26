#include <math.h>
#include <stdio.h> 
#include <array>
#include "Solve2DegEq.h"
#include "Source1.cpp"
using namespace std;
using namespace mynamespace;

int main(void) {
	double a, b, c;
	a = 3;
	b = 9;
	c = 2;
	array<double, 2> x = solve(a, b, c);
	printf_s("x1= %lf \n x2= %lf", x[0], x[1]);

	SayHello();
	return 0;
}

