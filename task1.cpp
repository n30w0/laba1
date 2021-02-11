#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void main(double x){
	double f;
	cout << "x= "; cin >> x;
	f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / ((cos(x)) - cos(3 * x) + cos(5 * x));
	cout << "f= " << f << endl;
}