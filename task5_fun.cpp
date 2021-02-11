#include "pch.h"
#include <iostream>
#include <cmath>
double f(double x) {
	double f;
	f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / ((cos(x)) - cos(3 * x) + cos(5 * x));
	return f;
}