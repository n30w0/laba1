﻿// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
double f(double x) {
	double f;
	f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / ((cos(x)) - cos(3 * x) + cos(5 * x));
	return f;
}