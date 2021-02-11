#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double f;
double x;
void fun()
{
	f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / ((cos(x)) - cos(3 * x) + cos(5 * x));
}
void main()
{
	cout << "x= "; cin >> x;
	fun();
	cout << "f= " << f << endl;
}