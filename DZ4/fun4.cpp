#include "fun4.h"
double func_y(double a, double b) {
	if (a <= b) {
		return ((a - b) * (a + b)) / ((a + b) * (a * a - a * b + b * b));
	}
	if (a > b) {
		return a + log(b * b);
	}
}
double func_t(double a, double b) {
	double y = func_y(a, b);
	if (y == b) {
		return (y * 2.0 + sqrt(y * y - a)) / (2.0 * b - sqrt(a * a - y));
	}
	if (y < b) {
		return sin(y * y) + ((1.0) / (tan(a - b)));
	}
	if (y > b) {
		return cbrt(y * sin(a)) + (1.0) / sqrt(y * cos(b));
	}
}