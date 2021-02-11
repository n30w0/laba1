#include "pch.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double f(double x);
void main(double x)
{
	cout << "x= "; cin >> x;
	cout << "f= " << f(x) << endl;
}
